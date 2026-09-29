class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() == 1) return true;
     
       int start = 0,end=s.size()-1;
       while(start<=end)
       {
        if(!isalnum(s[start])) {start++;continue;}
        if(!isalnum(s[end])) {end--;continue;}

        if(toupper(s[start]) != toupper(s[end])) return false;
        else
        {
            start++,end--;
        }
       }
        return true;
    }
};