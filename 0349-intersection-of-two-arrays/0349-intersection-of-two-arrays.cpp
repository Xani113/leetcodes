class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        std::sort(nums1.begin(), nums1.end());
        std::sort(nums2.begin(), nums2.end());
        int i = 0, j = 0;
        int n1 = nums1.size(), n2 = nums2.size();
        vector<int> res;
        res.reserve(std::min(n1, n2));
        while (i < n1 && j < n2) {
            if (nums1[i] < nums2[j]) {
                i++;
            } else if (nums1[i] > nums2[j]) {
                j++;
            } else {
                int val = nums1[i];
                res.push_back(val);
                while (i < n1 && nums1[i] == val) i++;
                while (j < n2 && nums2[j] == val) j++;
            }
        }
        return res;
    }
};