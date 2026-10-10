class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        bool seen[1001] = {false};
        for(char c:jewels){
            seen[c] = true;
        }
        int count=0;
        for(char ch:stones){
            if(seen[ch]) count++;
        }
        return count; 
    }
};