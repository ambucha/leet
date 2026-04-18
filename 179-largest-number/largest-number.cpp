#include <algorithm>
#include <string>

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        // start by creating a vector of strings
        vector<string> n2;
        string big = "";
        for(int x: nums){
            n2.push_back(to_string(x));
        }

        // now sort it in the custom order with the logic that a + b > b + a
        sort(n2.begin(), n2.end(), [](const string& a, const string &b){
            return a + b > b + a;
        });

        // check for 000 edge cases
        if(n2[0] == "0"){
            return "0";
        }

        for(const string &a : n2){
            big += a;
        }
        return big;
    }
};