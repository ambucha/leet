class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int keep = 0;
        for(int i = 0;i < n; i++){
            if(nums[i] != val){
                nums[keep] = nums[i];
                keep++;
            }
        }
        return keep;
    }
};