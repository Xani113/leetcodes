class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      int n = nums.size();
        for(int i=1; i<n; i++)
            if(nums[i]==nums[i-1]) return true;
        sort(nums.begin(), nums.end());
        for(int i = 0; i<n-1; i++){
            if(nums[i] == nums[i+1])
                return true;
        }
        return false;
    }
};