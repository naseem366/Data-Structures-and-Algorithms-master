#include<iostream>
using namespace std;
int main(){
   int a;
   int i;
   int n=10;



   LOOP:for(i=0;i<20;i++){
    if(i==15){i++;
        goto LOOP;
    }
    else
    cout<<"The values are: "<<i<<endl;
   }

    cout<<"I am always here for you"<<endl;

    return 0 ;
}


