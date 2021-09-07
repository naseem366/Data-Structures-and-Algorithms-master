
#include<iostream>
#include<math.h>
 using namespace std;
 int main()
 {
     float a=0;
     float b=0;
     float c=0;
     cout<<"Enter the three sides of Triangle ";
     cin>>a>>b>>c;
     float s= (a+b+c)/2;
     float Area=sqrt(s*(s-a)*(s-b)*(s-c) );
     cout<<"AREA of triangle = "<<Area;
     return 0;

 }
