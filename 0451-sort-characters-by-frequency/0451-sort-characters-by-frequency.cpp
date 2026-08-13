class Solution {
public:
    string frequencySort(string s) {
        int freq[256] = {};
        for (char c : s) {
            ++freq[c];
        }
        vector<pair<int, char>> chars;
        for (int i = 0; i < 256; ++i) {
            if (freq[i] > 0) {
                chars.push_back({freq[i], i});
            }
        }
        sort(chars.rbegin(), chars.rend());
        string ans;
        ans.reserve(s.size());
        for (auto& p : chars) {
            ans.append(p.first, p.second);
        }   
        return ans;
    }
};