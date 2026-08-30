class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minidx = 0, maxidx = 0; 
        for (int i = 1; i < n; ++i) {
            if (nums[i] < nums[minidx]) minidx = i;
            if (nums[i] > nums[maxidx]) maxidx = i;
        }
        int l = min(minidx, maxidx);
        int r = max(minidx, maxidx);
        return min({r + 1, n - l, l + 1 + n - r});
    }
};