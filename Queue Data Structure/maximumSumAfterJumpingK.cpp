#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct mycomp{
    bool operator()(pair<int,int>p1,pair<int,int>p2){
        return p1.first<p2.first;


    }


};
int maxScore(int arr[],int k,int n){
    priority_queue<pair<int,int>,vector<pair<int,int> >, mycomp> maxheap;
    int maxScore=0;
    maxheap.push({arr[0],0});
    for(int i=1;i<n;i++){
        while(maxheap.top().second<(i-k)){
            maxheap.pop();
        }
        maxScore=arr[i]+maxheap.top().first;
        maxheap.push({maxScore,i});

    }
    return maxScore;


}
int main(){
    int A[]={100,-30,-50,-15,-20,-30};
    int k=3;
    int n=sizeof(A)/sizeof(A[0]);
    cout<<maxScore(A,k,n);

}
