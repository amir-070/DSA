class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {

        // int str = -1;

        // for(int i = 0 ;i<s.size()-1;i++)
        // {
        //     for(int j = i+1;j<s.size();j++)
        //     {
        //         if(s[i] == s[j])
        //         {
        //             str = max(str,j-i-1);
        //         }
        //     }
        // }
        // return str;


        vector<int> pos(26,-1);

        int m_len = -1;
        for(int i=0;i<s.size();i++)
        {
            if(pos[s[i] - 'a'] == -1) pos[s[i] - 'a'] = i;
            else m_len = max(m_len,i-pos[s[i] - 'a']-1);
        }

        return m_len;
    }
};