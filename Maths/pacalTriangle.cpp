#include<iostream>
#include<bits/stdc++.h>
using namespace std;



vector<int> getRow(int A) {

    vector<int>currRow;
    currRow.push_back(1);

    if(A == 0){
        cout<<"Only in codingiton";
      return currRow;

    }

    vector<int>prev = getRow(A-1);

    for(int i=1;i<prev.size();i++){
            cout<<"In loop";
        int curr=prev[i-1]+prev[i];
        cout<<"Value of Curr"<<curr<<endl;
        currRow.push_back(curr);
    }
    currRow.push_back(1);
  return currRow;
}






int main()
{
    int n = 3;
    vector<int> arr = getRow(n);

    for(int i = 0; i < arr.size(); i++)
    {
        if (i == arr.size() - 1)
            cout << arr[i];
        else
            cout << arr[i] << ", ";
    }
    return 0;
}
