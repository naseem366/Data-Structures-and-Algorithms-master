#include<stdio.h>
#include<stdlib.h>
int tph,philname[20],status[20],howhung,hu[20],choice;
//TPA-total Number of philosher
//howhung how much philosper hunger
//number of philosher ho[]
int main(){
int i;
printf("\n\nDINING PHILOSOPHER PROBLEM");
printf("\nEnter the number of philosheres");
scanf("%d",&tph);
    for(i=0;i<tph;i++){
        philname[i]=(i+1);
        status[i]=1;
    }
printf("How Many Hungry : ");
scanf("%d",&howhung);
if(howhung==tph){
    printf("\n All Are Hungry..\n Dead lock stage will occur");
    printf("\n Exiting\n");
}
else{
    for(i=0;i<howhung;i++){
        printf("Enter The Philosopher %d Position: ",(i+1));

        scanf("%d",&hu[i]);
        status[hu[i]]=2;
    }
    do{
        printf("\n1.Enter  Once can Eat at a time \t2.Two Can eat\t3.exit\nEnter Your Choice:");
        scanf("%d",&choice);
        switch(choice){

        case 1: one();
                break;
        case 2: two();
                break;
        case 3: exit(0);
        default: printf("\nInvilid Option..");
            break;

        }
    }while(1);
}
}
one(){
    int pos=0,x,i;
    printf("\nAllow  One philoshpher to eat at same time\n");
    for(i=0;i<howhung;i++,pos++){
        printf("\n P%d Is Granted To Eat ",philname[hu[pos]]);
          for(x=pos;x<howhung-1;x++){
                printf("\n P%d Is Waiting ",philname[hu[x+1]]);

          }
    }

}two(){
    int pos=0,x,i,j,y,k;
    printf("\nAllow  Two philoshpher to eat at same time\n");
    for(i=0;i<howhung;i++){

          for(j=i+1;j<howhung;j++){

           if(abs(hu[i]-hu[j])>1 && abs(hu[i]-hu[j])!=4){
                printf("\n\n Combination %d\n",(pos+1));
           x=hu[i];
           y=hu[j];
           pos++;
           printf("\n P%d and P%d Are Granted To Eat ",philname[x],philname[y]);
           for(k=0;k<howhung;k++){
                if(hu[k]!=x && hu[k]!=y){
                    printf("\n P%d Is Waiting ",philname[hu[x+1]]);


           }

          }
    }

}

    }


}
