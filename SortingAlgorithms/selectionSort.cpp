#include<iostream>
using namespace std;


void selectionSort(int a[],int n){

    for(int i=n-1;i>0;i--){

            cout<<"This is the pass:"<<i<<endl;
            int max1=a[0];
            int pos=0;
            for(int j=1;j<=i;j++){

                if(a[j]>max1){

                    max1=a[j];
                    pos=j;

            }




        }

            //Find the Gretest Number and and put it into last

            a[pos]=a[i];
            a[i]=max1;



    }
    for(int i=0;i<6;i++){
            cout<<a[i]<<endl;
        }






}



int main(){
        int arr[]={97,27,3,99,5,6};
        int n=6;
        selectionSort(arr,n);

        return 0;









}


