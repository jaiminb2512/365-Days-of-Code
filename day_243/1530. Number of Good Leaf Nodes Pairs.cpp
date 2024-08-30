/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr, right(nullptr)) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> dfs(TreeNode* root, int distance, int& count) {
        if (!root) return {};
        if (!root->left && !root->right) return {1};
        
        vector<int> leftDistances = dfs(root->left, distance, count);
        vector<int> rightDistances = dfs(root->right, distance, count);
        
        for (int ld : leftDistances) {
            for (int rd : rightDistances) {
                if (ld + rd <= distance) {
                    count++;
                }
            }
        }
        
        vector<int> result;
        for (int ld : leftDistances) {
            if (ld + 1 <= distance) {
                result.push_back(ld + 1);
            }
        }
        for (int rd : rightDistances) {
            if (rd + 1 <= distance) {
                result.push_back(rd + 1);
            }
        }
        return result;
    }
    
    int countPairs(TreeNode* root, int distance) {
        int count = 0;
        dfs(root, distance, count);
        return count;
    }
};
