static const int fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size();
        if (n <= 1) return 0;
        vector<int> stk;
        stk.reserve(n + 1);
        stk.push_back(-1); 

        const char* str = s.data();
        int max_len = 0;
        for (int i = 0; i < n; ++i) {
            if (str[i] == '(') {
                stk.push_back(i);
            } else {
                stk.pop_back();
                if (stk.empty()) {
                    stk.push_back(i);
                } else {
                    max_len = std::max(max_len, i - stk.back());
                }
            }
        }

        return max_len;
    }
};