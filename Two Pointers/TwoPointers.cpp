/*Given a sorted array A (sorted in ascending order), having N integers, find if there exists any pair of elements (A[i], A[j]) such that their sum is equal to X.*/



#include<iostream>
#include<vector>
using namespace std;
vector<int>isPairExist(int a[],int n,int x){
    vector<int>vect;
    int j=n-1;
    int i=0;
    while(i<j){

            if(a[i]+a[j]==x){
                    vect.push_back(i);
                    vect.push_back(j);
                    return vect;

            }
            else if(a[i]+a[j]<x)
                i++;
            else
                j--;
        }


return vect;

 }




int main()
{
    int arr[] = { 3, 5, 9, 2, 8, 10, 11 };
    int val = 17;
    int arrSize = *(&arr + 1) - arr;

    vector<int> vect=isPairExist(arr, arrSize, val);
    for(int i=0;i<vect.size();i++)
        cout<<vect[i];

    return 0;
}
