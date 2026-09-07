static const int fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_so_far = nums[0];
        int min_so_far = nums[0];
        int result = nums[0];
        for (size_t i = 1; i < nums.size(); ++i) {
            int curr = nums[i];
            if (curr < 0) {
                swap(max_so_far, min_so_far);
            }
            max_so_far = max(curr, max_so_far * curr);
            min_so_far = min(curr, min_so_far * curr);
            result = max(result, max_so_far);
        }
        return result;
    }
};