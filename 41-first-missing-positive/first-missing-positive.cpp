class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        int i = 0;
        int count = 1;
        while(i < size && nums[i] <= 0){
            i++;
        }
        if(i == size){
            return count;
        }
        for(int j = i;j < size;j++){
            if(j > i && nums[j] == nums[j-1]){
                continue;
            }
            if(count != nums[j]){
                return count;
            }
            count++;
        }
        return count;
    }
};