class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 0) return {-1, -1};
        const int* data = nums.data();
        int low = 0, high = n - 1;
        int first = -1;
        while (low <= high) {
            int mid = low + ((high - low) >> 1);
            if (data[mid] >= target) {
                if (data[mid] == target) first = mid;
                high = mid - 1; 
            } else {
                low = mid + 1;
            }
        }
        if (first == -1) return {-1, -1};
        low = first;
        high = n - 1;
        int last = first;
        while (low <= high) {
            int mid = low + ((high - low) >> 1);
            if (data[mid] <= target) {
                if (data[mid] == target) last = mid;
                low = mid + 1; 
            } else {
                high = mid - 1;
            }
        }
        return {first, last};
    }
};