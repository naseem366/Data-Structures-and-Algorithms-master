#include<stdio.h>
#include<string.h>
int validation(char s[],int n){
for(int i=0;i<n;i++){
    if(s[i]!='a' && s[i]!='b')
        return 0;

}
return 1;



}
 int main(){
    char s[20];
    printf("Enter the string:");
    scanf("%s",&s);
    int n=strlen(s);
    if(validation(s,n)==0){
        printf("Not Valid");
        return 0;
    }

    if(s[n-1]=='a'&& s[0]=='a')
        printf("Accepted!");
    else
        printf("Not Accepted!");
 return 0;
        }
