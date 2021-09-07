#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter the Size of aray: ";
    cin>>n;
    int a[n];

  for(int i=1;i<=n;i++){
        cout<<"Enter The Element "<<i<<". Here : ";

        cin>>a[i];

  }
  for(int i=1;i<=n;i++){
    cout<<a[i]<<endl;
  }
  return 0;
}
