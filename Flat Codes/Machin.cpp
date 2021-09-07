#include <bits/stdc++.h>
using namespace std;
class State {
private:
	struct item {
		char value;
		State* next;
	};
	item Input1;
	item Input2;
	char m_out;

public:
	State()
		: Input1{ ' ', nullptr },
		Input2{ ' ', nullptr },
		m_out{ ' ' }
	{
	}
	static State* m_ptr;
	void Initialize(item input1,
					item input2,
					char out);
	static char Transition(char x);
	static string Traverse(string& str,
						int n);
};
State* State::m_ptr{ nullptr };
void State::Initialize(item input1,
					item input2,
					char out)
{
	Input1 = input1;
	Input2 = input2;
	m_out = out;
}
char State::Transition(char x)
{
	char ch{};
	if ((*m_ptr).Input1.value == x) {
		cout << (*m_ptr).m_out;
		ch = (*m_ptr).m_out;
		m_ptr = (*m_ptr).Input1.next;
	}
	else {
		cout << (*m_ptr).m_out;
		ch = (*m_ptr).m_out;

		m_ptr = (*m_ptr).Input2.next;
	}

	return ch;
}
string State::Traverse(string& str, int n)
{
	string str1{};
	for (int i = n - 1; i >= 0; i--) {
		str1 += Transition(str[i]);
	}
	reverse(str1.begin(), str1.end());

	return str1;
}
string mooreOut(string str, int n)
{
	State q1, q2, q3;

	q1.Initialize({ '0', &q1 },
				{ '1', &q2 }, '0');
	q2.Initialize({ '0', &q2 },
				{ '1', &q3 }, '1');
	q3.Initialize({ '0', &q2 },
				{ '1', &q3 }, '0');
	State::m_ptr = &q1;
	return State::Traverse(str, n);
}

int main()
{

	string str{ "111010000" };
	int n{ static_cast<int>(str.length()) };

	string str1{ mooreOut(str, n) };

	cout << "2's complement: " << str1;
	return 0;
}

