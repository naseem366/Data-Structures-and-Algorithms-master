#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct point{
    int x,y;
};
int shortestPath(point p1,point p2){
    int dx=abs(p1.x-p2.x);
    int dy=abs(p1.y-p2.y);
    return max(dx,dy);





}
int coverPoints(point sequence[],int size){
    int stepCount=0;
    for(int i=0;i<size-1;i++){
        stepCount+=shortestPath(sequence[i]+sequence[i+1]);
    }
    return stepCount;



}
int main(){


    point arr[] = { { 4, 6 }, { 1, 2 }, { 4, 5 }, { 10, 12 } };

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << coverPoints(arr, n);



return 0;
}



int coverPoints(vector<int> &X, vector<int> &Y) {

    int size1=X.size(),size2=Y.size(),ans=0;

    for(int i=1;i<size1;i++)
    {
     ans = ans + (abs(X[i]-X[i-1])<abs(Y[i]-Y[i-1])?abs(Y[i]-Y[i-1]):abs(X[i]-X[i-1]));
    }

    return ans;
}
