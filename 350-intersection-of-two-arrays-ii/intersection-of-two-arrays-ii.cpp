class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        unordered_multiset<int> st;

        for(auto x:nums1)
        {
            st.insert(x);
        }

        vector<int> res;

        for(int i=0;i<nums2.size();i++)
        {
            if(st.find(nums2[i]) != st.end())
            {
                auto itr = st.find(nums2[i]);
                res.push_back(nums2[i]);
                st.erase(itr);
            }
        }
        return res;
    }
};