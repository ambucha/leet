class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> f;
        for(int n : arr){
            f[n]++;
        }

        int lucky = -1;
        for(auto& p : f){
            int num = p.first;
            int count = p.second;
            if(num == count && num > lucky){
                lucky = num;
            }
        }
        return lucky;
    }
};