class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int firstMax = 0, secondMax = 0, firstMin = 10001, secondMin = 10001,
            n = nums.size();
            
        for (int i = 0; i < n; i++) {
            if (nums[i] > firstMax) {
                secondMax = firstMax;
                firstMax = nums[i];
            } else if (nums[i] > secondMax) {
                secondMax = nums[i];
            }

            if (nums[i] < firstMin) {
                secondMin = firstMin;
                firstMin = nums[i];
            } else if (nums[i] < secondMin) {
                secondMin = nums[i];
            }
        }

        return (firstMax * secondMax - firstMin * secondMin);
    }
};