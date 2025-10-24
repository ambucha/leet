class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int sum = 0;
        for(auto o : operations){
            if(o[1] == '+') sum++;
            else sum--;
        }
        return sum;
    }
};