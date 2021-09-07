#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find majority element in the array
// a: input array
// size: size of input array
int majorityElement(int arr[], int n)
{ int val=0,cont=n/2;
    // Traverse all array elements
    int i = 0;
    while (i<n)
    {
        // If this element is already processed,
        // then nothing to do
        if (arr[i] <= 0)
        {
            i++;
            continue;
        }

        // Find index corresponding to this element
        // For example, index for 5 is 4
        int elementIndex = arr[i]-1;

        // If the elementIndex has an element that is not
        // processed yet, then first store that element
        // to arr[i] so that we don't lose anything.
        if (arr[elementIndex] > 0)
        {
            arr[i] = arr[elementIndex];

            // After storing arr[elementIndex], change it
            // to store initial count of 'arr[i]'
            arr[elementIndex] = -1;
        }
        else
        {
            // If this is NOT first occurrence of arr[i],
            // then decrement its count.
            arr[elementIndex]--;

            // And initialize arr[i] as 0 means the element
            // 'i+1' is not seen so far
            arr[i] = 0;
            i++;
        }
    }


    for (int i=0; i<n; i++)
      {
           if(abs(arr[i] )> cont){
               val=i;
               break;
           }
      }


      if(val!=0){
          return val+1;
      }else{
       return -1;
      }



}

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];

        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }

        cout << majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends
