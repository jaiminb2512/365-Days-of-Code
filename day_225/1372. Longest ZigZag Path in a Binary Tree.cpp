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
private:
    void dfs(TreeNode* root, bool left, int& ans, int& count) {
        if (root == NULL) {
            count = 0;
            return;
        }
        
        if (left == true) {
            count++;
            ans = max(ans, count);

            left = false;
            dfs(root->left, left, ans, count);
            dfs(root->right, left, ans, count);
        }
        
        else {
            count++;
            ans = max(ans, count);

            left = true;
            dfs(root->right, left, ans, count);
             dfs(root->left, left, ans, count);
        }
    }

public:
    int longestZigZag(TreeNode* root) {
        
        int ans = 0;
        int count = 0;
        dfs(root, false, ans, count);
        
        int ans1=ans;
        ans=0;
        dfs(root, true, ans, count);
        int ans2 = ans;

        int ansf=max(ans1,ans2);

        return ansf-1;
    }
};