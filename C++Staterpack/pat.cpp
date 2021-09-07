/*        * 1  5
        * * 2  4
      * * * 3   3
    * * * * 4
  * * * * * 5
* * * * * * 6

n=6
i=n<=6
*/








#include<iostream>
using namespace std;
void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++){
            cout<<" ";

        }
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }

     cout<<endl;
    }
}
int main(){
    int a;
    cout<<"Enter the value of :";
    cin>>a;
    pattern(a);
    return 0;
}
