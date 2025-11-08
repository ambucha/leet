class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> u;
        for(char c : s){
            u[c]++;
        }

        int n = s.size();
        for(int i = 0; i < n; i++){
            if(u[s[i]] == 1){
                return i;
            }
        }
        return -1;

    }
};