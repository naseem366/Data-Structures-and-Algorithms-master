#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[]={15,25,6,54,45,26,12};
    int n=sizeof(A)/sizeof(A[0]);
    priority_queue<int>pq;
    for(int i=0;i<n;i++)
        pq.push(A[i]);

        pq.pop();
    cout<<"Element in Priority Queue are:"<<endl;
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }



return 0;

}
//TC:O(nlogn) SC : O(n)

