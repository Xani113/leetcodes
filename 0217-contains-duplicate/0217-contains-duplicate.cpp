class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       int n = nums.size();
        if (n <= 1) return false;
        int* data = nums.data();
        std::sort(data, data + n);
        for (int i = 1; i < n; ++i) {
            if (data[i] == data[i - 1]) {
                return true;
            }
        }
        return false;
    }
};