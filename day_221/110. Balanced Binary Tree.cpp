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
    pair<bool, int> isBalanacedFast(TreeNode* root){
        
        if(root == nullptr){
            pair<int, int> p = make_pair(true, 0);
            return p;
        }
        
        pair<int, int> left = isBalanacedFast(root->left);
        pair<int, int> right = isBalanacedFast(root->right);
        
        bool leftAns = left.first;
        bool rightAns = right.first;
        
        bool diff = abs (left.second - right.second) <= 1;
        
        pair<bool, int> ans;
        ans.second = max(left.second, right.second) + 1;
        
        if(leftAns && rightAns && diff) ans.first = true;
        else ans.first = false;
            
        return ans;
    }
    
    
    bool isBalanced(TreeNode* root) {
        
        return isBalanacedFast(root).first;
        
    }
};