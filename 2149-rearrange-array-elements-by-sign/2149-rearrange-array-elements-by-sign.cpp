static const int fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        int* out = ans.data();
        const int* in = nums.data();
        int pidx = 0;
        int nidx = 1;

        for (int i = 0; i < n; ++i) {
            int val = in[i];
            if (val > 0) {
                out[pidx] = val;
                pidx += 2;
            } else {
                out[nidx] = val;
                nidx += 2;
            }
        }

        return ans;
    }
};