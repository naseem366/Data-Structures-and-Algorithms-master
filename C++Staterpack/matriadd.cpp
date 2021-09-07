#include<iostream>
using namespace std;

void MatrixAdd(int n){
    int a[n][n];
    int b[n][n];
    int res[n][n];

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<"Enter The Element of Matrix a["<<i<<"]"<<"["<<j<<"]"<<". Here : ";

        cin>>a[i][j];

  } }
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<"Enter The Element Of matrix b["<<i<<"]"<<"["<<j<<"]"<<". Here : ";

        cin>>b[i][j];

  }
  }

 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){

    res[i][j]=a[i][j]+b[i][j];

  }
  }


 for(int i=0;i<n;i++){
      cout<<" | ";
    for(int j=0;j<n;j++){
    cout<<res[i][j]<<" ";

  }
    cout<<" | ";
  cout<<endl;






}
}

int main(){
  int n;
      cout<<"Enter the Size of aray: ";
    cin>>n;



 MatrixAdd(n);




return 0;

  }
