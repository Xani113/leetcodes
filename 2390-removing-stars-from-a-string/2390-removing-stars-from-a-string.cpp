class Solution {
public:
    string removeStars(string s) {
        int n = s.size();
        int i = 0, j = 1;
        while (j < n) {
            if (s[j] == '*') {
                --i;
            } else {
                ++i;
                s[i] = s[j];
            }
            ++j;
        }
        return i >= 0 ? s.substr(0, i + 1) : "";
    }
};