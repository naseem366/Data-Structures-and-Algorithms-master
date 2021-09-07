#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(char *a,char *b){
char temp=*a;
*a=*b;
*b=temp;
}
string findnext(string number,int n){
 int i,j;
 for(i=n-1;i>0;i--){
    if(number[i]>number[i-1])
        break;

 }
 if(i==0){

    return "-1";
 }
 int x=number[i-1];
 int s=i;
 for(j=i+1; j<n; j++)
    if(number[j]>x && number[j]<number[s])
        s=j;
    swap(&number[s],&number[i-1]);
    sort(number.begin()+i,number.end());

return number;





}
int main()
{
    char digits[] = "534976";
    int n = strlen(digits);
   cout<<findnext(digits, n);
    return 0;
}
