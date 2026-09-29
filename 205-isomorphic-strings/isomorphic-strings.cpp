class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false;

    vector<int> v1(128,-1),v2(128,-1);

    for(int i=0;i<s.length();i++)
    {
        if(v1[s[i]]!= v2[t[i]]) return false;
        else
        {
            v1[s[i]] = v2[t[i]] = i;
        }
    }

    return true;
        
    }
};