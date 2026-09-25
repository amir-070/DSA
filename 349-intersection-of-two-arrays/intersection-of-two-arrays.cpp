class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      unordered_set<int> st;

      for(auto i:nums1) st.insert(i);

      vector<int> res;
      
      for(int i=0;i<nums2.size();i++)
      {
        if(st.find(nums2[i]) != st.end())
        {
            res.push_back(nums2[i]);
            st.erase(nums2[i]);
        }
      }

      return res;
    }
};