class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> combinations;
        vector<int> startNums(n,0);
        for(int i = n - k;i < n;i++){
            startNums[i] = 1;
        }
        do{
            vector<int> tempCombo;
            for(int j = 0;j < n;j++){
                if(startNums[j] == 1){
                    tempCombo.push_back(j + 1);
                }
            }
            combinations.push_back(tempCombo);
        }while(next_permutation(startNums.begin(), startNums.end()));
        return combinations;
    }
};