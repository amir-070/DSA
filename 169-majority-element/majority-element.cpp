class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int cand = 0 , count = 0;
        for(int i = 0;i<nums.size();i++)
        {
            if(count == 0)
            {
                cand = nums[i];
            }
            if(cand == nums[i])
            {
                count++;
            }
            else count--;
        }

        return cand;
    }
};