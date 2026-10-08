static const int fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int* arr = nums.data();
        for (int i = 0; i < n; ++i) {
            while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
                std::swap(arr[i], arr[arr[i] - 1]);
            }
        }
        for (int i = 0; i < n; ++i) {
            if (arr[i] != i + 1) {
                return i + 1;
            }
        }
        return n + 1;
    }
};