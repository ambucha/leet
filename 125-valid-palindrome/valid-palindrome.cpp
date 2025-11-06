class Solution {
public:
    bool isPalindrome(string s) {
        string s2;
        string r;
        for(char c : s){
            if(isalpha(c) || isdigit(c)){
                s2 += tolower(c);
                r += tolower(c);
            }
        }
        reverse(r.begin(), r.end());
        if(s2 == r){
            return true;
        }
        return false;
    }
};