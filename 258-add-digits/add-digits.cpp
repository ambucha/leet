class Solution {
public:
    int addDigits(int num) {
        if(num < 10){
            return num;
        }

        string s = to_string(num);
        int sum = 0;

        for(auto c : s){
            sum += c - '0';
        }
        return addDigits(sum);
    }
};