#include<stdio.h>

int main(){
int  bt[20],wt[20],tat[20],i,n;
float wtavg,tatavg;
printf("\nEnter Process Number: ");
scanf("%d",&n);
for(i=0;i<n;i++){
        printf("\nEnter Bust Time for process %d-- ",i);
            scanf("%d",&bt[i]);

}
wt[0]=wtavg=0;
tat[0]=tatavg=bt[0];
for(i=1;i<n;i++){
        wt[i]=wt[i-1]+bt[i-1];
tat[i]=tat[i-1]+bt[i];
wtavg+=wt[i];
tatavg+=tat[i];

}
 printf("\n\t Process \tBust time \tWaiting TIme \tTernaroundTime\n");

for(i=0;i<n;i++){
        printf("\n\t P%d \t\t %d \t\t %d \t\t %d ",i,bt[i],wt[i],tat[i]);

}
 printf("\nAvarage Waiting Time: %f",wtavg/n);
 printf("\nAvarage Teraround Time: %f",tatavg/n);


getch();

}
