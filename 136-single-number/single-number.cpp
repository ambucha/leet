class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> count;
        for(auto a : nums){
            count[a]++;
        }
        for(auto const& [key,val] : count){
            if(val == 1){
                return key;
            }
        }
        return 0;
    }
};