#include <unordered_set>

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<int> seen;
        int count = 0;
        for(char c : jewels){
            seen.insert(c);
        }
        for(char c : stones){
            if(seen.count(c)){
                count++;
            }
        }
        return count;
    }
};