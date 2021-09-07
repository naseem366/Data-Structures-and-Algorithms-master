
#include<stdio.h>


int main(){
int n=123;

printf("Enter A number:");
int sum=0;
int rem=0;
int i=0;


while(n>0){
    rem=n%10;
    sum+=rem;
    n=n/10;
    i++;


}
printf("%d,%d",i,sum);

}
