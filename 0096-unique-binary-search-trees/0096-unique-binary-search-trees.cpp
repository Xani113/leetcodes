static const int fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int numTrees(int n) {
        long long c = 1;
        for (int i = 0; i < n; ++i) {
            c = c * 2 * (2 * i + 1) / (i + 2);
        }
        return (int)c;
    }
};