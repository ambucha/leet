class Solution {
public:
    int lengthOfLastWord(string s) {
        int current = 0;
        int last = 0;
        for(char c : s){
            if(!isspace(c)){
                current++;
            }
            else{
                if(current != 0){
                    last = current;
                    current = 0;
                }
            }
        }
        return current == 0 ? last : current;
    }
};