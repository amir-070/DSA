class Solution {
public:
    bool checkIfPangram(string s) {
        int n=s.length();
        if(n<26) return false;

        vector<int> v(26,0);
        for(int i=0;i<n;i++)
        {
            v[s[i] - 'a']++;
        }
        for(auto f:v)
        {
            if(f == 0) return false;
        }
        return true;
    }
};