class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        //  my solution
        // for (int i = 0; i <= strs.size() - 1; i++) {
        //     string st1 = strs[i];
        //     sort(st1.begin(), st1.end());
        //     vector<string> s;

        //    if(strs[i] != "1")
        //    { s.push_back(strs[i]);}

        //     for (int j = i + 1; j < strs.size(); j++) {
        //         string st2 = strs[j];

        //         sort(st2.begin(), st2.end());

        //         if (st1 == st2 && strs[j] != "1") {
        //             s.push_back(strs[j]);
        //             strs[j] = "1";
        //         }
        //     }
        //     if(!s.empty()) res.push_back({s});
        // }


         // tc = O(n * k log k);
        unordered_map<string, vector<string>> mp;

        for(auto str : strs)
        {
            string key = str;
            sort(key.begin(),key.end());

            mp[key].push_back(str);
        }
      
         vector<vector<string>> ans;

         for(auto& [_,group]: mp)
         {
            ans.push_back(group);
         }
         return ans;
    }
};