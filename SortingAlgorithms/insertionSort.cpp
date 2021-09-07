#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>-1&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;

        }
        arr[j+1]=key;

    }





}

int main(){

int arr[]={4,5,2,3,6,1};
insertionSort(arr,6);
for(int i=0;i<6;i++){
    cout<<arr[i]<<endl;




}







return 0;
}
