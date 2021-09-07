#include<stdio.h>
#include<string.h>
int validation(char s[],int n){
for(int i=0;i<n;i++){
    if(s[i]!='0' && s[i]!='1')
        return 0;

}
return 1;



}
 int main(){
    char s[20];
    int i=0,k;
    printf("Enter the string:");
    scanf("%s",&s);
    int n=strlen(s);
    if(validation(s,n)==0){
        printf("Not Valid");
        return;
    }

    while(s[i]!='\0'){
        switch(s[i]){

        case 0:if(i==n-1){
                printf("Accepted");
                return 0;

              }
                    i++;

              break;
      case 1:   i++;
                k++;
                break;
            default: printf("Rejected");
             return 0;


    }





        }

}



