#include<iostream>
using namespace std;

int max(int a,int b){
     if(a>b){
        return a;
     }
     else{
     return b;
     }
}
int main(){
    int a,b,result;
    cout<<"Enter The numbers you wants to compare:"<<endl;
    cin>>a>>b;
    result=max(a,b);
    cout<<"The maximum number is : "<<result;

    return 0;

}
