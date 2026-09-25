class Solution {
public:
    int thirdMax(vector<int>& nums) {

        long long max1 = LLONG_MIN, max2 = LLONG_MIN, max3 = LLONG_MIN;

        for (auto i : nums) {
            if (i > max1) {
                max3 = max2;
                max2 = max1;
                max1 = i;
            }

            else if (i > max2 and i != max1) {
                max3 = max2;
                max2 = i;
            }

            else if (i > max3 and i != max2 and i != max1)
                max3 = i;
        }

        if (max3 == LLONG_MIN)
            return max1;

        return max3;
    }
};