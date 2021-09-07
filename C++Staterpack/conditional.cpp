#include<iostream>
using namespace std;
int main(){
   int a;
   int b,c;
   int res;
   cout<<"Enter Three:"<<endl;
   cin>>a>>b>>c;
   if(a>b)
     if(a>c)
      res=a;

     else
       res=c;


   else if (b>c)
       res=b;


   else
    res=c;

   cout<<"The largest number is: "<<res<<endl;


return 0 ;
}

