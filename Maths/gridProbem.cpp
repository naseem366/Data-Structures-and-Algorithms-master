#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int numberOfPaths(int m,int n){
    int path=1;
    for(int i=n;i<(m+n-1);i++){

             path*=i;
    path/=(i-n+1);
    }


}





int main(){




    cout<<numberOfPaths(2,2);
    return 0;






}

