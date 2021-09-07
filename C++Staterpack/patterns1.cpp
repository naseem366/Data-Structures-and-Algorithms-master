/*
1
2 3
4 5 6
7 8 9 10

n=4
1
2
3
4
j<=i





*/

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the number of row : "<<endl;
    cin>>n;
    for(int i=1,k=0;i<=n;i++){

        for(int j=1;j<=i;j++){
            k++;
            cout<<k<<" ";

        }
        for(int k=1;k<=i-1;k++)
               cout<<" ";
        cout<<endl;    }
    return 0;
}
