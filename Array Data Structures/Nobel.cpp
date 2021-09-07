#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int nobel(int arr[],int n)
{
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1])
            continue;
        if(arr[i]==n-i-1){
            return arr[i];
        }
    }
    return 1;


}
int main()
{
    int arr[] = {10, 3, 20, 40, 2};
    int res = nobel(arr, 5);
    if (res != -1)
        cout << "The noble integer is " << res;
    else
        cout << "No Noble Integer Found";
    return 0;
}
