class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        const string& first = strs[0];
        int n_strs = strs.size();
        int first_len = first.size();
        const char* first_data = first.data();
        for (int col = 0; col < first_len; ++col) {
            char target = first_data[col];
            for (int row = 1; row < n_strs; ++row) {
                if (col == strs[row].size() || strs[row][col] != target) {
                    return first.substr(0, col);
                }
            }
        }
        return first;
    }
};