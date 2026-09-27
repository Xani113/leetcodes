static const int fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int n = a.size();
        int idx = -1;
        for (int i = n - 2; i >= 0; --i) {
            if (a[i] < a[i + 1]) {
                idx = i;
                break;
            }
        }
        if (idx == -1) {
            std::reverse(a.begin(), a.end());
            return;
        }
        for (int i = n - 1; i > idx; --i) {
            if (a[i] > a[idx]) {
                std::swap(a[i], a[idx]);
                break;
            }
        }
        std::reverse(a.begin() + idx + 1, a.end());
    }
};