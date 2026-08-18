class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> remainder_count(k, 0);
        remainder_count[0] = 1; 
        int running_sum = 0;
        int ans = 0;
        for (int num : nums) {
            running_sum += num;
            int rem = ((running_sum % k) + k) % k;
            ans += remainder_count[rem];
            remainder_count[rem]++;
        }
        return ans;
    }
};