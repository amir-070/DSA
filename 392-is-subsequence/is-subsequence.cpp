class Solution {
public:
    bool isSubsequence(string s, string t) {
        // if(s == "") return true;

        // int i = 0 ,j=0;

        // while(i<s.size() and j<t.size())
        // {
        //     if(s[i] == t[j])
        //     {
        //         i++;
        //         j++;
        //     }
        //     else j++;

        //     if(i == s.size()) return true;
        // }
        
        // return false;
         return end(s) == accumulate(begin(t), end(t), begin(s), [](auto acc, char c) { return acc + (*acc == c); });
    }
};