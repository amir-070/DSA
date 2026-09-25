class Solution {
public:
    int thirdMax(vector<int>& nums) {


        if(nums.size() == 1) return nums[0];
        if(nums.size() == 2) return max(nums[0],nums[1]);

       long long max1 = LLONG_MIN ,max2 = LLONG_MIN ,max3 = LLONG_MIN;

       for(int i=0;i<nums.size();i++)
       {
        if(nums[i]>max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = nums[i];
        }
        else if(nums[i]>max2 and nums[i] != max1)
        {
            max3 = max2;
            max2 = nums[i];
        }
        else if(nums[i]>max3 and nums[i] != max2 and nums[i] != max1)
        {
            max3 = nums[i];
        }
        
       }


       if(max3 == LLONG_MIN) return max1;

       return max3;
    }
};