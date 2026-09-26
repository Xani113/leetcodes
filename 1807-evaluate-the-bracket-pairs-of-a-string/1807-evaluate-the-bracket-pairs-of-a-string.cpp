class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> dict;
        for (auto& kv : knowledge) {
            dict[kv[0]] = kv[1];
        }

        string result;
        result.reserve(s.size());
        int n = s.size(), i = 0;

        while (i < n) {
            if (s[i] == '(') {
                int j = i + 1;
                while (s[j] != ')') j++;
                string key = s.substr(i + 1, j - i - 1);
                result += dict.count(key) ? dict[key] : "?";
                i = j + 1;
            } else {
                result += s[i++];
            }
        }
        return result;
    }
};