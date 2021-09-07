/*
* * * * * * *
  * * * * *
    * * *
      *
4
7
5
3
1
k<=2i-1
j<=i-1


*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Entet the value of rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++){
            cout<<" ";

        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;


    }
    return 0;

}
