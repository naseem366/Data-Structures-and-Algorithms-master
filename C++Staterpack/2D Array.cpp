#include<iostream>
using namespace std;
int main(){
    int n;
    int a[100][100];
    cout<<"Enter the Size of aray: ";
    cin>>n;

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<"Enter The Element a["<<i<<"]"<<"["<<j<<"]"<<". Here : ";

        cin>>a[i][j];

  }
  }
  for(int i=0;i<n;i++){
            cout<<"| ";

    for(int j=0;j<n;j++){

    cout<<a[i][j]<<" ";
  }
  cout<<" | ";
  cout<<endl;


  }
  return 0;
}

