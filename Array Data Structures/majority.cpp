#include<bits/stdc++.h>
using namespace std;
int majorityElement(int *arr,int n){
sort(arr,arr+n);
int count=1,max_ele=-1,temp=arr[0],ele,f=0;
for(int i=1;i<1;i++){
    if(temp==arr[i])
        count++;
    else{
    count=1;
    temp=arr[i];
    }
    if(max_ele<count)
    {
        max_ele=count;
        ele=arr[i];
        if(max_ele>( n/2))
        {
            f=1;
            break;
        }

    }





}
return(f==1 ? ele : -1);
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
    cout<<majorityElement(A, n);



    return 0;

}

