class Solution {
public:
    string largestOddNumber(string num) {
        
        string res;


        for(int i=num.size()-1;i>=0;i--)
        {
            if((num[i]-'0') % 2 == 1)
            {
                res = num.substr(0,i-0+1);

                return res;
            }
        }
        return res;
    }
};