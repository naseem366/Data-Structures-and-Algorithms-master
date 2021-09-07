#include<iostream>
#include<bits/stdc++.h>

using namespace std;


void swap(vector<int>&arr,int i,int j){
int temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;

}


int minSwap(vector<int>arr,int n){

  int  ans=0;
  vector<int>val=arr;
  map<int,int>p;
  sort(val.begin(),val.end());
  for(int i=0;i<n;i++){
    p[arr[i]]=i;
  }
for(int i=0;i<n;i++){
    if(arr[i]!=val[i]){
        ans++;
        cout<<"iteration"<<i<<":"<<ans<<endl;
        int init=arr[i];
        swap(arr,i,p[val[i]]);
        p[init]=p[val[i]];
        p[val[i]]=i;
    }
  }





return ans;






}




int main(){
vector <int> a;
a.push_back(101);
a.push_back(758);
a.push_back(315);
a.push_back(730);
a.push_back(472);
a.push_back(619);
a.push_back(460);
a.push_back(479);



  int n = a.size();
    int val=minSwap(a,n);
    cout<<val<<endl;






}
