class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last(256, -1);
        int left = 0;
        int best = 0;
        for(int right = 0; right < s.size(); right++){
            char cur = s[right];
            if(last[cur] >= left) left = last[cur] + 1;
            last[cur] = right;
            best = max(best, right - left + 1);
        }
        return best;
    }
};