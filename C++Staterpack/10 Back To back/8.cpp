#include<iostream>
#include<math.h>
using namespace std;
int main()
{
float a=0;
float b=0;
float c=0;
     cout<<" Enter The Sides of Triangle";
     cin>>a;
     cin>>b;
     cin>>c;
     if( (a+b>c)||(a+c>b)||(b+c>a))
     {
         float S=(a+b+c)/2;

         float A= sqrt(S*(S-a)*(S-b)*(S-c));
         cout<<"Area Of ="<<A;
     }
     return 0;
}
