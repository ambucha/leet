class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i = 0;i < image.size();i++){
            int k = 0;
            int j = image[i].size() - 1;
            int temp;
            while(k < j){
                temp = image[i][k];
                image[i][k] = image[i][j];
                image[i][j] = temp;
                j--;
                k++;
            }
        }
        for(int i = 0;i < image.size();i++){
            for(int j = 0;j < image[i].size();j++){
                if(image[i][j] == 0){
                    image[i][j] = 1;
                }
                else{
                    image[i][j] = 0;
                }
            }
        }
        return image;
    }
};