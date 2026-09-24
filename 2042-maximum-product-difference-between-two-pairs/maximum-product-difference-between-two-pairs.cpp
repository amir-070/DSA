class Solution {
public:
    int maxProductDifference(vector<int>& nums) {

        int max = 0, secmax = 0, min = 10001, secmin = 10001;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < min) {
                secmin = min;
                min = nums[i];
            } else if (nums[i] < secmin) {
                secmin = nums[i];
            }

            if (nums[i] > max) {
                secmax = max;
                max = nums[i];
            } else if (nums[i] > secmax) {
                secmax = nums[i];
            }
        }

        return (max * secmax - min * secmin);
    }
};