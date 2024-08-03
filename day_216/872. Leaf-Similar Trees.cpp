class Solution {    
public:
    void storeLeaf1(TreeNode* root1, vector<int>& ans1) {
        if (root1 == nullptr) return;
        if (root1->left == nullptr && root1->right == nullptr) {
            ans1.push_back(root1->val);
            return;
        }
        storeLeaf1(root1->left, ans1);
        storeLeaf1(root1->right, ans1);
    }
    
    void storeLeaf2(TreeNode* root2, vector<int>& ans2) {
        if (root2 == nullptr) return;
        if (root2->left == nullptr && root2->right == nullptr) {
            ans2.push_back(root2->val);
            return;
        }
        storeLeaf2(root2->left, ans2);
        storeLeaf2(root2->right, ans2);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> ans1, ans2;
        storeLeaf1(root1, ans1);
        storeLeaf2(root2, ans2);
        return ans1 == ans2;
    }
};
