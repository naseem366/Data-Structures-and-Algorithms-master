#include<stdio.h>
void main(){
char s[100];
int i,k,cont=0;
printf("Enter The String :");
scanf("%s",&s);
i= strlen(s);
for(k=0;k<i-1;k++){
    if(s[i]=='a'||s[i]=='b'){
        cont++;
    }
    else{
        cont=0;
    }
}

if(cont){
if(s[0]=='a'&& s[i-1]=='a'){
        printf("Accepted");


}else{
printf("Not Accepted");
}

}else{
            printf("The Enter String Contains the Wrong value Plese enter a valid string");


}
}
