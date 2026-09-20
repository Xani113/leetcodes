static const int fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        
        // The result will have length at most max(len(a), len(b)) + 1
        int max_len = std::max(i, j) + 2;
        string res(max_len, '0');
        char* out = res.data();
        
        int k = max_len - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += (a[i--] - '0');
            if (j >= 0) sum += (b[j--] - '0');

            out[k--] = (sum & 1) + '0';
            carry = sum >> 1;
        }
        if (k == 0) {
            return res.substr(1);
        }

        return res;
    }
};