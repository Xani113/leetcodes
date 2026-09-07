class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int maxi = nums[0];
        int sum = 0;
        for (int x : nums) {
            sum += x;
            maxi = max(maxi, sum);
            if (sum < 0) {
                sum = 0;
            }
        }
        return maxi;
    }
};