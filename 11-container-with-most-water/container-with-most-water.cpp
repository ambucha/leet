class Solution {
public:
    int maxArea(vector<int>& height) {
        int mostWater = 0;
        int area;
        int i = 0;
        int j = height.size() - 1;
        while(i < j){
            area = min(height[i],height[j])*(j - i);
            if(area > mostWater){
                mostWater = area;
            }
            if(height[i] < height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return mostWater;
    }
};