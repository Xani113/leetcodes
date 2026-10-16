static const int fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int r = 0, c = cols - 1;

        while (r < rows && c >= 0) {
            int val = matrix[r][c];
            if (val == target) return true;
            if (val < target) {
                r++;
            } else {
                c--;
            }
        }

        return false;
    }
};