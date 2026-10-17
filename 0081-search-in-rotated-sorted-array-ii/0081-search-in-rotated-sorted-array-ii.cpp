static const int fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int f = 0;
        int l = (int)nums.size() - 1;
        const int* arr = nums.data();
        while (f <= l) {
            int mid = f + ((l - f) >> 1);
            if (arr[mid] == target) return true;
            if (arr[f] == arr[mid] && arr[mid] == arr[l]) {
                f++;
                l--;
            }
            else if (arr[f] <= arr[mid]) {
                if (target >= arr[f] && target < arr[mid]) {
                    l = mid - 1;
                } else {
                    f = mid + 1;
                }
            }
            else {
                if (target > arr[mid] && target <= arr[l]) {
                    f = mid + 1;
                } else {
                    l = mid - 1;
                }
            }
        }
        return false;
    }
};