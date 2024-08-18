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
    
    map<int, vector<int>> mp;
    
public:
    int maxLevelSum(TreeNode* root) {
        
        if(root == nullptr) return 0;
        
        int level = 0;
        queue< pair <TreeNode*, int>> q;
        q.push(make_pair(root, 0));
        
        while(!q.empty()){
            
            pair<TreeNode*, int> p = q.front();
            q.pop();
            TreeNode* frontnode = p.first;
            level = p.second;
            
            mp[level].push_back(frontnode -> val);
            
            if(frontnode->left)
                q.push(make_pair(frontnode->left, level+1));
            if(frontnode->right)
                q.push(make_pair(frontnode->right, level+1));
            
        }
        
        int max = INT_MIN, ans = -1;
        
        for(auto i : mp){
            
            int sum = 0;
            for(int j = 0; j<i.second.size(); j++){
                sum += i.second[j];
            }
            
            if(sum > max){
                max = sum;
                ans = i.first + 1;
            }
            
        }
        
        return ans;
    }
};