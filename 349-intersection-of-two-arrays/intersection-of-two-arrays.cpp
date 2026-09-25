class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        // My solution 
    //   unordered_set<int> st;

    //   for(auto i:nums1) st.insert(i);

    //   vector<int> res;

    //   for(int i=0;i<nums2.size();i++)
    //   {
    //     if(st.find(nums2[i]) != st.end())
    //     {
    //         res.push_back(nums2[i]);
    //         st.erase(nums2[i]);
    //     }
    //   }

    //   return res;

        set<int> n1, n2;
        int i = 0;
        while(i < nums1.size() || i < nums2.size()){
            if(i < nums1.size()){
                n1.insert(nums1[i]);
            }
            if(i < nums2.size()){
                n2.insert(nums2[i]);
            }
            i++;
        }
        vector<int> ans;
        for(int x : n1){
            auto it = n2.find(x);
            if(it != n2.end()){
                ans.push_back(x);
            }
        }
        return ans;

    }
};