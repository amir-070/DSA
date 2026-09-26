class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        int n = nums.size() - 1;
        if (k == 0 || n + 1 == 1)
            return false;
        unordered_map<int, int> mp;
        for (int i = n; i >= 0; i--) {
            if (mp.find(nums[i]) != mp.end()) {
                if (mp[nums[i]] - i <= k)
                    return true;
            }

            mp[nums[i]] = i;
        }
        return false;
    }
};