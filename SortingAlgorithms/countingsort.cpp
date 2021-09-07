#include<iostream>
using namespace std;
countSort(int a[],int n){
int maxVal=a[0];
int temp[10];
for(int i=1;i<n;i++){
    if(a[i]>maxVal) maxVal=a[i];
}

int count[maxVal+1];

for(int i=0;i<=maxVal;i++){
    count[i]=0;




}
for(int i=0;i<n;i++){

    count[a[i]]++;

}
//find sum of elements
for(int i=1;i<=maxVal;i++){
    count[i]+=count[i-1];
}

for(int i=n-1;i>=0;i--){
    temp[count[a[i]]-1]=a[i];
    count[a[i]]--;
}
for(int i=0;i<n;i++){
    a[i]=temp[i];

}



}
printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main() {
  int array[] = {4, 2, 2, 8, 3, 3, 1};
  int n = sizeof(array) / sizeof(array[0]);
  countSort(array, n);
  printArray(array, n);
}
