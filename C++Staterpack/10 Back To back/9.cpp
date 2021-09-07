#include<iostream>
#include<math.h>
using namespace std;
int main()
{
float a=0;
float b=0;
float c=0;
int count=0;
     cout<<" Enter The Sides of Triangle";
     cin>>a;
     cin>>b;
     cin>>c;
     if(a+b>c)
     {
         count =1;
     }
     else if(a+c>b )
     {


        count =1;
     }
     else if(b+c>a)
     {

         count=1;
     }
     else
     {
         cout<<"Triangle is invilid";
     }
     if(count==1)
     {


         float S=(a+b+c)/2;

         float A= sqrt(S*(S-a)*(S-b)*(S-c));
         cout<<"Area Of ="<<A;
     }
     return 0;
}
