class Solution {
public:
    int romanToInt(string s) {
        int val[128] = {0};
        val['I'] = 1;
        val['V'] = 5;
        val['X'] = 10;
        val['L'] = 50;
        val['C'] = 100;
        val['D'] = 500;
        val['M'] = 1000;
        const char* str = s.data();
        int n = s.size();
        int total = 0;
        for (int i = 0; i < n; ++i) {
            int curr = val[str[i]];
            if (i + 1 < n && curr < val[str[i + 1]]) {
                total -= curr;
            } else {
                total += curr;
            }
        }
        return total;
    }
};