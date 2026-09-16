class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int* data = digits.data();
        for (int i = n - 1; i >= 0; --i) {
            if (data[i] < 9) {
                data[i]++;
                return digits;
            }
            data[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};