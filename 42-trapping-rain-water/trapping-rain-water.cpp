class Solution {
public:
    int trap(vector<int>& height) {
        int lmax = 0;
        int rmax = 0;
        int left = 0;
        int right = height.size() - 1;
        int sum = 0;

        while(left < right){
            if(height[left] < height[right]){
                if(lmax < height[left]) lmax = height[left];
                sum += lmax - height[left];
                left++;
            }
            else{
                if(rmax < height[right])rmax = height[right];
                sum += rmax - height[right];
                right--;
            }
        }

        return sum;
    }
};