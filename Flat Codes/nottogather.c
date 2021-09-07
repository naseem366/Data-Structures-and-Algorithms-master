#include<stdio.h>
#include<string.h>
int validation(char s[],int n){
for(int i=0;i<n;i++){
    if(s[i]!='a' && s[i]!='b')
        return 0;

}
return 1;



}
int  main(){
    char s[20];

    printf("Enter the string:");
    scanf("%s",&s);
    int n=strlen(s);
    if(validation(s,n)==0){
        printf("Not Valid");
        return 0;
    }

if(s[0]=='a'){
        for(int i=1;i<n-1;i++){
            if(s[i] == 'b'){

                if(s[i+1]=='b'){

                printf("rejected");
                return 0;

            }
            }
        }
                 printf("Accepted");

}else{
printf("rejected");
}
}

