class Solution {
public:
    int totalMoney(int n) {
        int mon = 0;
        int x = 0;
        int sum = 0;
        for(int i = 0; i < n; i++){
            if(i % 7 == 0){
                mon++;
                sum += mon;
                x = mon;
            }
            else{
                x++;
                sum += x;
            }
        }
        return sum;
    }
};