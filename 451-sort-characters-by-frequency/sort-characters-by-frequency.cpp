class Solution {
public:
    string frequencySort(string s) {
             
             unordered_map<char,int> mp;

             for(auto c:s) mp[c]++;

             vector<pair<int,char>> p;

             for(auto [ch,fr] : mp) p.push_back({fr,ch});


             sort(p.rbegin(),p.rend());

             string st ="";

             for(auto [fr,ch]:p) st.append(fr,ch);

             return st;
    }
};