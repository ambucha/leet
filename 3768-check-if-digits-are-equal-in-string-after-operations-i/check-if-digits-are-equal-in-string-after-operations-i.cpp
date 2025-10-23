class Solution {
public:
    bool hasSameDigits(string s) {
        int n = s.size();
        while(n != 2){
            for(int i = 0; i < n - 1; i++){
                int x = (s[i] + s[i + 1]) % 10;
                s[i] = x;
            }
            s.pop_back();
            n--;
        }
        if(s[0] == s[1]) return true;
        return false;
    }
};