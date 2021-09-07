#include<stdio.h>

int main(){

int i,j,n;
int a[2][2];
for(i=0;i<2;i++){

    for(j=0;j<2;j++){
        printf("Enter the %d%d value of matrix:",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<2;i++){

    for(j=0;j<2;j++){
        printf("%d\t",a[i][j]);

    }
    printf("\n");
}




return 0;
}
