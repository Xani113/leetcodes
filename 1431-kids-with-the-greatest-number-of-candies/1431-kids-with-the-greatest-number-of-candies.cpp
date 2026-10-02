class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxx=0;
        for(int c: candies){
            maxx=max(maxx,c);
        }
        vector<bool> result;
        for(int c: candies){
            result.push_back(c + extraCandies >= maxx);
        }
        return result; 
    }
};