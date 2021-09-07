#include<stdio.h>
#include<string.h>
int validation(char s[],int n){
for(int i=0;i<n;i++){
    if(s[i]!='0' && s[i]!='1')
        return 0;}
return 1;
}
 int main(){
    char s[10];
    int i=0;
    char state='0';
   printf("Enter the string:");
    scanf("%s",&s);
    int n=strlen(s);
    if(validation(s,n)==0){
        printf("Not Valid");
        return 0;
    }

    while(s[i]!='\0'){
        switch(s[i]){

        case '0':state='0';i++;
                 break;
        case '1': state='1';i++;
        break;
        default:
            printf("NOt Valid");
}
    }
    printf("DFA PROGRAMMW");
if(state=='1'){
        printf("Accepted");
        return 0;
}else{
        printf("Not Accepted");
        return 0;
    }
    return 0;

}





