#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"Inside Function"<<a<<endl<<b<<endl;

    return;
}

int main(){
    int a,b;
    cout<<"Enter Two number to swap"<<endl;
    cin>>a>>b;
    cout<<"<--------------------Before Swapfunction call------------------------->"<<endl<<a<<endl<<b<<endl;
    cout<<"Adtress values"<<&a<<endl<<&b<<endl;
    swap(a,b);
    cout<<"<--------------------After Swapfunction call------------------------->"<<endl<<a<<endl<<b<<endl;



}

