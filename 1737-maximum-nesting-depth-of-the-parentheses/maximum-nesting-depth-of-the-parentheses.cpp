class Solution {
public:
    int maxDepth(string s) {
        
        int maxdep = 0,count = 0;

        for(int i =0;i<s.length();i++)
        {
            if(s[i] == '(') count++;
            if(s[i] == ')')
            {
                maxdep = max(maxdep,count);
                count--;
            }
        }

        return maxdep;
    }
};