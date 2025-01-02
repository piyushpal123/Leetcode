class Solution {
public:
    bool check(const string &s) {
        char f = s[0], l = s[s.size() - 1];
        return (f == 'a' || f == 'e' || f == 'i' || f == 'o' || f == 'u') &&
               (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u');
    }

    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> prefixSum(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            prefixSum[i + 1] = prefixSum[i] + (check(words[i]) ? 1 : 0);
        }

        vector<int> ans;
        for (const auto &query : queries) {
            int left = query[0], right = query[1];
            ans.push_back(prefixSum[right + 1] - prefixSum[left]);
        }

        return ans;
    }
};
