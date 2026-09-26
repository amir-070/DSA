class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int,int> mp;
        int n =nums.size()-1;
        for(int i = n;i>=0;i--)
        {
            auto itr = mp.find(nums[i]);

            if(itr != mp.end())
            {
                if(abs(i - itr->second) <= k) return true;
            }
                mp[nums[i]] =  i;
        }

        return false;
    }
};