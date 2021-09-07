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
    char str[20];
    int i=0;
    char state='A';
    printf("Enter the string:");
    scanf("%s",str);
    int n=strlen(str);
    if(validation(str,n)==0){
        printf("Not Valid Please Enter the string containing 0 & 1 ");
        return 0;
    }

    for(int i=0;str[i]!='\0';i++){
        switch(state){

        case 'A':if(str[i]=='0') state='B';
        else if(str[i]=='1') state='A';
        break;
              case 'B':if(str[i]=='0') state='C';
        else if(str[i]=='1') state='A';
        break;
             case 'C':if(str[i]=='0') state='C';
        else if(str[i]=='1') state='A';
        break;



    }





        }
        if(state=='C'){
            printf("Accepted!");
            return 0;
        }else{
        printf(" No Accepted!");
        return 0;

        }

}
