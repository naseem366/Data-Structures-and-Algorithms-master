


/*Given a sorted array A (sorted in ascending order), having N integers, find if there exists any pair of elements (A[i], A[j]) such that their sum is equal to X.*/



#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         int n=nums.size();
         vector<vector<int>>vect;
         sort(nums.begin(),nums.end());
         for(int i=0;i<n;i++){
            if(i>0 && (nums[i]==nums[i-1])) continue;

         //Two Pointer Concept Implementatation
         int j=i+1;
         int k=n-1;
         while(j<k){
            if(nums[i]+nums[j]+nums[k]>0) k--;
            else if(nums[i]+nums[j]+nums[k]<0) j++;
            else{

                vect.push_back(vector<int>{nums[i],nums[j],nums[k]});
                do{
                    j++;

                } while(j<k && nums[j-1]==nums[j]);
               do{
                    k--;

                } while(j<k && nums[k+1]==nums[k]);


            }


         }



         }
         return vect;





    }
};
