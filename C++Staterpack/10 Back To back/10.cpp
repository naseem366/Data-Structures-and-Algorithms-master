#include<iostream>
using namespace std;
int main()
{
    int year=0;
    cout<<"Enter The year:";
    cin>>year;
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
                cout<<"year īis leap"<<year;
            else
                cout<<"year is not leap";

        }
        else
                cout<<"year is leap"<<year;
    }
    else
                cout<<"year is not leap";
    return 0;
}
