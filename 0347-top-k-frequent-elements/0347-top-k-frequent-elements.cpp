class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> cnt;
        for (int x : nums) ++cnt[x];

        vector<pair<int,int>> freq; // {count, val}
        freq.reserve(cnt.size());
        for (auto& p : cnt) freq.emplace_back(p.second, p.first);

        // nth_element puts the k largest frequencies at the front (unordered)
        nth_element(freq.begin(), freq.begin() + k - 1, freq.end(),
                    greater<pair<int,int>>());

        vector<int> ans;
        ans.reserve(k);
        for (int i = 0; i < k; ++i) ans.push_back(freq[i].second);
        return ans;
    }
};
