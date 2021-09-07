#include<bits/stdc++.h>
using namespace std;


int isPowerOfTwo(int n)
{
 if(n==1) return 1;

   if(n<3)
   return  0;

   return (int)(ceil(log2(n)) == floor(log2(n)));
}


int main()
{
    cout<<isPowerOfTwo(1024000000);


    return 0;
}

