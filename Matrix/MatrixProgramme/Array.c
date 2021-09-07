
#include<stdio.h>

int main(){

int i;
int a[5];

for(i=0;i<5;i++){


        printf("Enter the %dth value of Array:",i+1);
        scanf("%d",&a[i]);

}
for(i=0;i<5;i++){

        printf("%d\t",a[i]);


}




return 0;
}

