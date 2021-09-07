

#include<iostream>
#include<vector>
using namespace std;
vector<int>isPairExist(int a[],int n,int x){
    vector<int>vect;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]+a[j]==x){
                    vect.push_back(i);
                    vect.push_back(j);
                    return vect;

            }
            if(a[i]+a[j]>x)
                break;
        }
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
