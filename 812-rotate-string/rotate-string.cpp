class Solution {
public:
    bool rotateString(string s, string goal) {


        string concat = goal+goal;

        if(concat.find(s) != string::npos) return true;
        else return false;
        
    }
};