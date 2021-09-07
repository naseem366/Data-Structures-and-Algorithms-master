#include <bits/stdc++.h>
using namespace std;



vector<int> leaders(int a[], int n){
    int  j=0;
    vector<int> vect;
   for(int i=1;j<n;i++){

       //find take one element
       if(a[j]<a[i]){
             cout<<"I value Changed When "<<a[j]<<a[i]<< "this is "<<i<<j<<endl;
           j++;
           i=j;



       }
       else if(i==n-1){
           vect.push_back(a[j]);
           j++;
           i=j;



       }
   }
   vect.push_back(a[n-1]);
   return vect;
}
int main(){
    int a[]={30 ,66, 78, 74, 91, 76 ,60, 20, 13, 67};
    int n=10;

    vector<int> v = leaders(a, n);


for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;

}
}
