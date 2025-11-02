class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int sum = 0;
        for(char c : coordinates){
            sum += (c + '0');
        }
        if(sum % 2 == 0){
            return false;
        }
        return true;
    }
};