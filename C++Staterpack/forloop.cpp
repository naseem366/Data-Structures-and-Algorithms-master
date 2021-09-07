#include<iostream>
using namespace std;
#define MAX 100
int main(){
    int n,i,a;
    int arr[MAX];

    cout<<"Enter the value of N : "<<endl;
    cin>>n;



    for(i=0;i<=n;i++){
     cin>>a;
     arr[i]=a;
    }


    for(i=0;i<=n;i++){
     cin>>arr[i];
    }
    return 0;
}
