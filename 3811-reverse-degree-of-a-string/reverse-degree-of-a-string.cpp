class Solution {
public:
    int reverseDegree(string s) {

        int ans = 0,n = s.length();

        for(int i = 0;i<n;i++)
        {
            ans +=   (-1*(s[i] - 'z' - 1))*(i+1);
        }
        return ans;
    }
};