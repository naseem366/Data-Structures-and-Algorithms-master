class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
                if(n<3)
            return -1;
        int index = 0;
        int sum_left = 0;
        int sum_right = 0;
        int right = index+1;
        while(right<n){
            sum_right+=nums[right];
            right++;
        }
        if(sum_left == sum_right)
            return index;
        index++;
        right = index+1;
        while(index<n){
            sum_left+=nums[index-1];
            sum_right-=nums[index];
            if(index == n-1)
                sum_right = 0;
            if(sum_left == sum_right)
                return index;
            index++;
        }
        return -1;
    }
};
