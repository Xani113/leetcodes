static const int fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(int i=0;i<strs.size();i++){
            string word = strs[i];
            sort(word.begin(), word.end());
            mp[word].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        ans.reserve(mp.size());
        for(auto &x: mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};