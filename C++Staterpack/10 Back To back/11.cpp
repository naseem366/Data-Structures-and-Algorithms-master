#include<iostream>
using namespace std;
int main()
{/*
    int year=0;
    cout<<"Enter The year:";
    cin>>year;
    */
    for(int i=1800;i<=2400;i++)
    {


    if( (i%4==0&&i!=100)||(i%400==0) )
{
    for(int j=1;j<=i;j++)
    {

    cout<<"."<<j;
     cout<<"\n"<<i;
     break;
}
    }
}
}
