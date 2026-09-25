class Solution {
public:
    int longestPalindrome(string s) {
        int freq[123] = {0};  int res = 0; int odd = 0;
        for (char ch : s) ++freq[ch];
        for (int i = 0; i < 123; ++i) {
            if (freq[i] % 2 == 1) { res += freq[i] - 1; odd = 1; }
            else res += freq[i];
        }
        return res + odd;
    }
};