class Solution {
private:
    int reverse(int n){
        int digit;
        string rev = "";
        if(n < 0){
            rev = "-";
        }

        while(n != 0){
            digit = n % 10;
            rev += to_string(digit);
            n /= 10;
        }
        return stoi(rev);
    }
public:
    int mirrorDistance(int n) {
        return abs(n - reverse(n));
    }
};