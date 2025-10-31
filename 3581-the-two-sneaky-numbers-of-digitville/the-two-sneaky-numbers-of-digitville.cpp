class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_set<int> og;
        vector<int> sneaky;
        sneaky.reserve(2);

        for(int i : nums){
            if(!og.insert(i).second){
                sneaky.push_back(i);
                if(sneaky.size() == 2){
                    break;
                }
            }
        }
        return sneaky;
    }
};