#include<stdio.h>

int main(){

int i,j,n;
int a[3][3];
for(i=0;i<3;i++){

    for(j=0;j<3;j++){
        printf("Enter the %d%d value of matrix:",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<3;i++){

    for(j=0;j<3;j++){
        printf("%d\t",a[j][i]);

    }
    printf("\n");
}




return 0;
}


