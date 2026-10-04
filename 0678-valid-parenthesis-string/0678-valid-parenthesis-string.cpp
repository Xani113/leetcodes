static const int fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool checkValidString(string s) {
        int min_open = 0; 
        int max_open = 0; 
        for (char ch : s) {
            if (ch == '(') {
                min_open++;
                max_open++;
            } else if (ch == ')') {
                min_open--;
                max_open--;
            } else { 
                min_open--; 
                max_open++; 
            }
            if (max_open < 0) return false;
            if (min_open < 0) min_open = 0;
        }
        return min_open == 0;
    }
};