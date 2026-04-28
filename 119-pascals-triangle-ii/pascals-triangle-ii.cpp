class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> pascal = {1};
        for(int i = 1;i <= rowIndex;i++){
            vector<int> temp;
                for(int count = 0; count <= i;count++){
                    if(count == 0 || count == i){
                        temp.push_back(1);
                    }
                    else{
                        temp.push_back(pascal[count - 1] + pascal[count]);
                    }
                }
                pascal = temp;
            }
            return pascal;
        }
};