#include<iostream>
using namespace std;
 void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}


void heapify(int a[],int n,int i){
int largest=i;
int l=2*i+1;
int r=2*i+2;
    if(l<n && a[l]>a[largest])
        largest=l;
    if(r<n && a[r]>a[largest])
        largest=r;
    if(largest !=i){
        swap(a[i],a[largest]);
        heapify(a,n,largest);
    }

}

void heapSort(int a[],int n){
    for(int i=n/2-1;i>=0;i--)
        heapify(a,n,i);
    for(int i=n-1;i>=0;i--){

    swap(a[0],a[i]);
    heapify(a,i,0);

    }
}
void printArray(int a[],int n){
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;

}
int main(){

int arr[]={3,61,81,1,2,55,5,6,7,8,0};
  int n = sizeof(arr) / sizeof(arr[0]);
    heapSort(arr, n);

    cout << "Sorted array is \n";
    printArray(arr, n);



}
