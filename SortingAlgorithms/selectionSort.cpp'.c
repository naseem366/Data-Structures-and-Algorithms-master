#include<iostream>
using namespace std;


InsertionSort(int a[],int n){
    for(int i=n-1;i<=0;i--){
            int max=a[0];
            int pos=0;
        for(int j=0;j<n;j++){
            if(a[j]>max){
                    max=a[j];
                    pos=j;

            }




        }
        a[pos]=a[i]
        a[i]=max;

            //Find the Gretest Number and and put it into last


    }




}
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
     *b=temp;

}




int main(){
        int arr[]={9,2,3,4,5,6};
        int n=6;
        InsertionSort(arr,n);
        for(int i=0;i<6;i++){
            cout<<arr[i]<<endl;
        }
        return 0;









}
