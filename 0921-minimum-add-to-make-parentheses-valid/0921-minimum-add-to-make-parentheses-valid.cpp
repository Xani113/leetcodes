static const int fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0;
        int adds = 0;
        const char* str = s.data();
        int n = s.size();
        for (int i = 0; i < n; ++i) {
            if (str[i] == '(') {
                open++;
            } else {
                if (open > 0) {
                    open--; 
                } else {
                    adds++; 
                }
            }
        }
        return adds + open;
    }
};