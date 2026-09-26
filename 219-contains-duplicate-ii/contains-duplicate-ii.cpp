class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        if( k==0 || nums.size() == 1) return false;
        int n = nums.size()-1;
        unordered_map<int, int> mp;
        for (int i = n; i >= 0; i--)
        {
            if (mp.find(nums[i]) != mp.end())
            {
                if ( mp[nums[i]] - i <= k) return true;
            }

            mp[nums[i]] = i;
        }
        return false;
    }
};