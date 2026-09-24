class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {

        int str = -1;

        for(int i = 0 ;i<s.size()-1;i++)
        {
            for(int j = i+1;j<s.size();j++)
            {
                if(s[i] == s[j])
                {
                    str = max(str,j-i-1);
                }
            }
        }
        return str;
    }
};