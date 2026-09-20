class Solution {
public:
    int reverseDegree(string s) {

        int ans = 0;

        // 97 - 122

        for(int i = 0;i<s.length();i++)
        {
            ans +=   (-1*(s[i] - 'z' - 1))*(i+1);
        }
        return ans;
    }
};