class Solution {
public:

    int beautySum(string s) {
         int n = s.size();
        int sum = 0;

        for (int i = 0; i < n; i++) {
            unordered_map<char, int> freq;
            int maxi = 0, mini = INT_MAX;

            for (int j = i; j < n; j++) {
                char c = s[j];
                freq[c]++;
                maxi = max(maxi, freq[c]);

                // Update mini correctly
                mini = INT_MAX;
                for (auto it : freq) {
                    mini = min(mini, it.second);
                }

                sum += (maxi - mini);
            }
        }

        return sum;
    }
};