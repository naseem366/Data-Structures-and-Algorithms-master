#include<iostream>
#define MAX 500
using namespace std;


string factorial(int val){
    int res[160];
    string str;
    res[0]=1;
    int n=1;
    for(int k=2;k<=val;k++)
        n=multiply(k,res,n);

    for(int i=n-1;i>=0;i--)
        str.push_back(res[i]);





}


int main(){

int n;
cout<<"Enter the value which of you want to calculate the factorial:"<<endl;
cin>>n;
factorial(n);
return 0;
}
