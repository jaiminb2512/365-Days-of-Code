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
     void solve(TreeNode *root, int target, unordered_map<long long,int> &m, long long &pSum, int &ans){
        
         if(root == NULL){
            return ;
        }

        pSum += root -> val;

        if(m.find((pSum - target)) != m.end()){
            ans = ans + m[(pSum - target)];
        }
         
        m[pSum]++;

        solve(root -> left, target, m, pSum, ans);
        solve(root -> right, target, m, pSum, ans);

        m[pSum]--;
         
        pSum -= root -> val;
         
    }


    int pathSum(TreeNode* root, int target) {
        
        int ans = 0;
        long long pSum = 0;
        unordered_map<long long,int> m;
        
        m[0] = 1; 
        
        solve(root, target, m, pSum, ans);
        
        return ans;
    }
};