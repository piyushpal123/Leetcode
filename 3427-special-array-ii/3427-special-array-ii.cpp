class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
          int n = nums.size();
        vector<int> firstFailure(n, n);

        // Precompute the first failure positions
        for (int i = n - 2; i >= 0; --i) {
            if ((nums[i] % 2) == (nums[i + 1] % 2)) {
                firstFailure[i] = i + 1;
            } else {
                firstFailure[i] = firstFailure[i + 1];
            }
        }

        vector<bool> results;

        for (const auto& query : queries) {
            int from = query[0];
            int to = query[1];

            if (firstFailure[from] <= to) {
                results.push_back(false);
            } else {
                results.push_back(true);
            }
        }

        return results;
        
    }
};