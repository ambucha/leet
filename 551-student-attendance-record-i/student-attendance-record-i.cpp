class Solution {
public:
    bool checkRecord(string s) {
        bool award = true;
        int A = 0;
        int L = 0;
        char prev = '\0';
        for(char c : s){
            if(c == 'A'){
                A++;
            }
            if(c == 'L'){
                if(prev == 'L'){
                    L++;
                }
                else{
                    L = 1;
                }
            }
            else{
                L = 0;
            }
            if(L >= 3 || A >= 2){
                award = false;
                break;
            }
            prev = c;
        }

        return award;
    }
};