class Solution {
public:
    string convert(string s, int numRows) {

        vector<vector<char>> res(numRows);

        int id = 0;
        while(id<s.length())
        {
            int j = 0;
            while(j<numRows && id<s.length())
            {
                res[j++].push_back(s[id++]);
            }
            j--;
            while(j>=0 && id<s.length())
            {
                if(j == 0 || j == numRows-1)
                {
                    j--;
                } 
                else 
                {
                    res[j--].push_back(s[id++]);
                }
            }

        }

        string str;
        for(auto st:res)
        {
            for(auto ch : st)
            {
                    str.push_back(ch);
            }
        }

        return str;
    }
};