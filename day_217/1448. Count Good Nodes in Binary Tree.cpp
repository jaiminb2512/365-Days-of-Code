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

    public:

    void solve(TreeNode * node,int cpm, int &ans){
        if(!node){return;}
        if(node->val>=cpm){++ans;cpm=node->val;}
        solve(node->left,cpm,ans);
        solve(node->right,cpm,ans);
    }

    int goodNodes(TreeNode* root) {
        int m=root->val;
        int ans = 0;
        solve(root,root->val,ans);
        return ans;
    }
};