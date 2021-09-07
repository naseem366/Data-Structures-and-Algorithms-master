#include <stdio.h>
#include <string.h>

#define STATES 99
#define SYMBOLS 20

int N_symbols;
int N_NFA_states;
char *NFAtab[STATES][SYMBOLS];
char *NFA_finals;

int N_DFA_states;
int DFAtab[STATES][SYMBOLS];
char DFA_finals[STATES+1];

char StateName[STATES][STATES+1];
char Eclosure[STATES][STATES+1];


void print_nfa_table(
	char *tab[][SYMBOLS],
	int nstates,
	char *finals)
{
	int i, j;

	puts("\nNFA: STATE TRANSITION TABLE");


	printf("     | ");
	for (i = 0; i <nsymbols; i++) printf("  %-6c", '0'+i);
	printf("  e\n");

	printf("-----+--");
	for (i = 0; i < nsymbols+1; i++) printf("-------");
	printf("\n");

	for (i = 0; i <nstates; i++)
        {
		printf("  %c  | ", '0'+i);
		for (j = 0; j < nsymbols+1; j++)
			printf("  %-6s", tab[i][j]);
		printf("\n");
	}
	printf("Final states = %s\n", finals);
}


void print_dfa_table(
	int tab[][SYMBOLS],
	int nstates,
	int nsymbols,
	char *finals)
{
	int i, j;

	puts("\nDFA: STATE TRANSITION TABLE");


	printf("     | ");
	for (i = 0; i <nsymbols; i++)
        printf("  %c  ", '0'+i);

	printf("\n-----+--");
	for (i = 0; i <nsymbols; i++)
        printf("-----");
	printf("\n");

	for (i = 0; i <nstates; i++)
        {
		printf("  %c  | ", 'A'+i);
		for (j = 0; j <nsymbols; j++)
			printf("  %c  ", tab[i][j]);
		printf("\n");
        }
	printf("Final states = %s\n", finals);
}


void load_NFA_table()
{

	NFAtab[0][0] = "1";
	NFAtab[0][1] = "";
	NFAtab[0][2] = "";
	NFAtab[0][3] = "2";
	NFAtab[1][0] = "";
	NFAtab[1][1] = "3";
	NFAtab[1][2] = "";
	NFAtab[1][3] = "";
	NFAtab[2][0] = "";
	NFAtab[2][1] = "";
	NFAtab[2][2] = "2";
	NFAtab[2][3] = "3";
	NFAtab[3][0] = "";
	NFAtab[3][1] = "";
	NFAtab[3][2] = "";
	NFAtab[3][3] = "";

	N_symbols = 3;
	N_NFA_states = 4;
	NFA_finals = "3";
	N_DFA_states = 0;
}

int string_merge(char *s, char *t)
{
	int n=0;
	char temp[STATES+1], *r=temp, *p=s;

	while (*p && *t)
        {
		if (*p == *t)
		{
			*r++ = *p++;
            t++;
		}
else if (*p < *t)
        {
			*r++ = *p++;
		}
else
        {
			*r++ = *t++;
			n++;
		}
	}
	*r = '\0';

	if (*t)
        {
		strcat(r, t);
		n += strlen(t);
	    }
else if (*p)
strcat(r, p);

	strcpy(s, temp);

	return n;
}

void get_next_state_NFA(char *nextstates, char *cur_states,
	char *nfa[STATES][SYMBOLS], int symbol)
{
	int i;
	char temp[STATES+1];

	temp[0] = '\0';
	for (i = 0; i <strlen(cur_states); i++)
		string_merge(temp, nfa[cur_states[i]-'0'][symbol]);
	strcpy(nextstates, temp);
}


int state_index(char *state, char stnt[][STATES+1], int *pn)
{
	int i;

	if (!*state)
     return -1;

	for (i = 0; i < *pn; i++)
		if (!strcmp(state, stnt[i]))
        return i;

	strcpy(stnt[i], state);
	return (*pn)++;
}


void get_ep_states(int state, char *epstates,
	char *nfa[][SYMBOLS], int n_sym)
{
	int i, n=0;


	strcpy(epstates, nfa[state][n_sym]);

	do {
		for (i = 0; i <strlen(epstates); i++)
			n = string_merge(epstates, nfa[epstates[i]-'0'][n_sym]);
	} while (n);
}

void init_Eclosure(char eclosure[][STATES+1],
	char *nfa[][SYMBOLS], int n_nfa, int n_sym)
{
	int i;

	printf("\nEpsilon-accessible states:\n");
	for (i = 0; i <n_nfa; i++)
        {
		get_ep_states(i, eclosure[i], nfa, n_sym);
		printf("    state %d : [%s]\n", i, eclosure[i]);
	}
	printf("\n");
}


void e_closure(char *epstates, char *states, char eclosure[][STATES+1])
{
	int i;

	strcpy(epstates, states);
	for (i = 0; i <strlen(states); i++)
		string_merge(epstates, eclosure[states[i]-'0']);
}


int nfa_to_dfa(char *nfa[][SYMBOLS], int n_nfa,
	int n_sym, int dfa[][SYMBOLS])
{
	int i = 0;
	int n = 1;

	char nextstate[STATES+1];
	char temp[STATES+1];
	int j;

	init_Eclosure(Eclosure, nfa, n_nfa, n_sym);

	e_closure(temp, "0", Eclosure);
	strcpy(StateName[0], temp);

	printf("Epsilon-NFA to DFA conversion\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j <n_sym; j++) {
			get_next_state_NFA(nextstate, StateName[i], nfa, j);
			e_closure(temp, nextstate, Eclosure);
			dfa[i][j] = state_index(temp, StateName, &n);
			printf("    state %d(%4s) : %d --> state %2d(%4s)\n",
				i, StateName[i], j, dfa[i][j], temp);
			dfa[i][j] += 'A';
		}
	}

	return n;
}


void get_DFA_finals(
	char *dfinals,
	char *nfinals,
	char stnt[][STATES+1],
	int n_dfa)
{
	int i, j, k=0, n=strlen(nfinals);

	for (i = 0; i <n_dfa; i++)
        {
		for (j = 0; j < n; j++)
		 {
			if (strchr(stnt[i], nfinals[j]))
			{
				dfinals[k++] = i+'A';
				break;
			}
		}
	}
	dfinals[k] = '\0';
}
int main()
{
	load_NFA_table();
	print_nfa_table(NFAtab, N_NFA_states, N_symbols, NFA_finals);

	N_DFA_states = nfa_to_dfa(NFAtab, N_NFA_states, N_symbols, DFAtab);
	get_DFA_finals(DFA_finals, NFA_finals, StateName, N_DFA_states);

	print_dfa_table(DFAtab, N_DFA_states, N_symbols, DFA_finals);
	return 0;
}
