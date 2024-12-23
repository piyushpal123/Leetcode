/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int cnt_swap(vector<int>& ans) {
        vector<pair<int, int>> valueIndex;
        for (int i = 0; i < ans.size(); i++) {
            valueIndex.push_back({ans[i], i});
        }

        sort(valueIndex.begin(), valueIndex.end());
        vector<bool> visited(ans.size(), false);
        int swaps = 0;

        for (int i = 0; i < ans.size(); i++) {
            if (visited[i] || valueIndex[i].second == i) {
                continue;
            }

            int cycle_size = 0;
            int j = i;
            while (!visited[j]) {
                visited[j] = true;
                j = valueIndex[j].second;
                cycle_size++;
            }

            if (cycle_size > 1) {
                swaps += cycle_size - 1;
            }
        }

        return swaps;
    }

public:
    int minimumOperations(TreeNode* root) {
        if (!root) return 0;

        queue<TreeNode*> q;
        q.push(root);
        int totalSwaps = 0;

        while (!q.empty()) {
            int size = q.size();
            vector<int> levelValues;

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();
                levelValues.push_back(node->val);
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            totalSwaps += cnt_swap(levelValues);
        }

        return totalSwaps;
    }
};
