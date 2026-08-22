class Solution {
public:
    double myPow(double x, int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        long long exp = n;
        if (exp < 0) {
            x = 1.0 / x;
            exp = -exp;
        }
        double ans = 1.0;
        while (exp > 0) {
            if (exp & 1) {
                ans *= x;
            }
            x *= x;
            exp >>= 1;
        }
        return ans;
    }
};