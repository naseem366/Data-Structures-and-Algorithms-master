#include<stdio.h>

int main(){

int i,j,n;
int a[3][3];
int b[3][3];
int c[3][3];
printf("Enter the value of matrix A:\n");

for(i=0;i<3;i++){

    for(j=0;j<3;j++){
        printf("Enter the %d%d value of matrix:",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
}
printf("Enter the value of matrix B:\n");

for(i=0;i<3;i++){

    for(j=0;j<3;j++){
        printf("Enter the %d%d value of matrix:",i+1,j+1);
        scanf("%d",&b[i][j]);
    }
}
for(i=0;i<3;i++){

    for(j=0;j<3;j++){
    c[i][j]=a[i][j]+b[i][j];
    }
}



for(i=0;i<3;i++){

    for(j=0;j<3;j++){
        printf("%d\t",c[i][j]);

    }
    printf("\n");
}




return 0;
}


