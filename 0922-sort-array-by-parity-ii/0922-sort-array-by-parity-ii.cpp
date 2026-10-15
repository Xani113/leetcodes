class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int i = 0; 
        int j = 1; 
        int* arr = nums.data();
        while (i < n && j < n) {
            while (i < n && (arr[i] & 1) == 0) {
                i += 2;
            }
            while (j < n && (arr[j] & 1) == 1) {
                j += 2;
            }
            if (i < n && j < n) {
                std::swap(arr[i], arr[j]);
                i += 2;
                j += 2;
            }
        }
        return nums;
    }
};