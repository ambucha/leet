#include <algorithm>

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> num = nums;
        sort(num.begin(), num.end());
        vector<vector<int>> perm;
        do{
            vector<int> temp;
            for(auto n : num){
                temp.push_back(n);
            }
            perm.push_back(temp);
        }while(next_permutation(num.begin(), num.end()));
        return perm;
    }
};