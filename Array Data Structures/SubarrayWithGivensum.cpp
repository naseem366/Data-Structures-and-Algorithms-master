
#include <bits/stdc++.h>
using namespace std;

vector<int> subarraySum(int array[], int n, int sum){

    vector<int > vect;

    int current_sum = array[0];
    int start_index = 0;


    for(int i = 1; i <= n; i++)
    {
        while(current_sum > sum && start_index < i-1)
        {
            current_sum = current_sum - array[start_index];
            start_index++;
        }
        if(current_sum == sum)
        {
            vect.push_back(start_index+1);
            vect.push_back(i);
            return vect;

        }




        if(i < n)
        {
          current_sum = current_sum + array[i];
        }
    }
   vect.push_back(-1);
    return vect;
}







int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];

        for(int i=0;i<n;i++)
            cin>>arr[i];

        vector<int>res;
        res = subarraySum(arr, n, s);

        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;

    }
	return 0;
}
