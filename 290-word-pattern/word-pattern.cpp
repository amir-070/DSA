class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        int i = 0;
        while(i < s.size()) {
            string t = "";
            while(s[i] != ' ' && i < s.size()) {
                t += s[i];
                i++;
            }
            words.push_back(t);
            i++;
        }
        if(pattern.size() != words.size()) return false;
        unordered_map<char, string> pw;
        unordered_map<string, char> wp;
        for(int i = 0; i < pattern.size(); i++) {
            if(pw.count(pattern[i]) == 0) pw[pattern[i]] = words[i];
            if(wp.count(words[i]) == 0) wp[words[i]] = pattern[i];
            if(pw[pattern[i]] != words[i] || wp[words[i]] != pattern[i]) return false;
        }
        return true;
    }
};