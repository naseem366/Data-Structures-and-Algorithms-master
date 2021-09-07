#include<queue>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[]={15,25,6,54,45,26,12};
    int n=sizeof(A)/sizeof(A[0]);

    cout<<"Element in Priority Queue are:"<<endl;
    priority_queue<int>pq(A,A+n);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }



return 0;

}
//TC:O(n) SC : O(n)

