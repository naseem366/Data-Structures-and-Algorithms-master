#include<iostream>
#include<bits/stdc++.h>
using namespace std;

twoWay(int arr[],int n){
    int l=0,r=n-1;
    int k=0;
    while(l<r){
        l++;
        k++;
    }
    while(arr[r]%2==0&&l<r)
        r--;
    if(l<r)
        swap(arr[l],arr[r]);

    sort(arr,arr+k,greater<int>());
    sort(arr+k,arr+n);




}




int main(){
 int arr[] = { 1, 3, 2, 7, 5, 4 };
 twoWay(arr,6);

 for(int i=0;i<6;i++)

    cout<<arr[i]<<" ";
    return 0;






}
