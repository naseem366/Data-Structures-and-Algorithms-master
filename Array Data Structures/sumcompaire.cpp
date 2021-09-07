#include<bits/stdc++.h>
using namespace std;
bool hasArrayTwoCanditdates(int A[],int arr_size,int sum){
int l,r;
sort(A,A+arr_size);
l=0;
r=arr_size-1;
while(l<r) {
    if(A[l]+A[r]==sum){
        cout<<"The item are"<<A[l]<<A[r]<<endl;
    return 1;

    }

    else if (A[l]+A[r]<sum)
        l++;
    else if (A[l]+A[r]>sum)
        r--;
    else
        {

            return -1;
            cout<<"No valid pair exists"<<endl;
        }

}
return 0;




}
int main(){
    int A[20];
    int n;
    cout<<"Enter the size of array :"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter The "<<i+1<<"th element of Array"<<endl;
        cin>>A[i];
    }
    int arr_size=sizeof(A)/sizeof(A[0]);
    if(hasArrayTwoCanditdates(A,arr_size,n))
         cout << "Array has two elements"
                " with given sum";
    else
        cout << "Array doesn't have two"
                " elements with given sum";
    return 0;

}
