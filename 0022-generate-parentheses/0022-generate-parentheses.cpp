static const int fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}();

class Solution {
private:
    void backtrack(int openN, int closedN, int n, string& current, vector<string>& res) {
        if (openN == n && closedN == n) {
            res.push_back(current);
            return;
        }
        if (openN < n) {
            current.push_back('(');
            backtrack(openN + 1, closedN, n, current, res);
            current.pop_back();
        }
        if (closedN < openN) {
            current.push_back(')');
            backtrack(openN, closedN + 1, n, current, res);
            current.pop_back();
        }
    }

public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        const int catalan[] = {1, 1, 2, 5, 14, 42, 132, 429, 1430};
        if (n <= 8) {
            res.reserve(catalan[n]);
        }
        string current;
        current.reserve(2 * n);
        backtrack(0, 0, n, current, res);
        return res;
    }
};