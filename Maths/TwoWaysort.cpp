// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;


void printArr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

		cout<<endl;
}


bool check(int a,int b){
    if(a%2==0 && b%2==0)
        return a<b;
    if(a%2!=0&&b%2!=0)
        return b<a;
    if(a%2!=0)
        return true;
    return false;



}
int main()
{
	int arr[] = { 1, 3, 2, 7, 5, 4 };
	int n = sizeof(arr) / sizeof(int);



	printArr(arr, n);
	sort(arr,arr+n,check);
		printArr(arr, n);

	return 0;
}

// This code is contributed by Nikhil Yadav

