class Solution {
public:
    int maxProductDifference(vector<int>& nums) {

        int max = INT_MIN, secmax = INT_MAX, min = INT_MAX, secmin = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            if(nums[i]<min)
            {
                secmin = min;
                min=nums[i];
            }
            else if(nums[i]<secmin)
            {
                secmin = nums[i];
            }

            if(nums[i]>max)
            {
                secmax = max;
                max=nums[i];
            }
            else if(nums[i]>secmax )
            {
                secmax = nums[i];
            }
        }

        return (max*secmax)-(min*secmin);
    }
};