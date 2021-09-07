int max=INT_MIN;
    int sum=0;
    for(int i=0;i<A.size();i++){
        sum+=A[i];
        if(sum<0)
            sum=0;
        else if(sum>max)
            max=sum;




    }





#include<iostream>
using namespace std;
int maxSubarraySum(int a[], int n){

    int max = INT_MIN;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
        if (max < sum)
            max = sum;

        if (sum< 0)
            sum = 0;
    }
    return max;
}
int main(){

int a[]={2,5,-9,8,1,-5,5,2,1,-8,2};

int n=sizeof(a)/sizeof(a[0]);
cout<<maxSubarraySum(a,n);
}
