#include <bits/stdc++.h> 

using namespace std;

/********************************************************* 

    Binary tree node class for reference:
    
    template<typename T>
    class TreeNode {
        T val;
        TreeNode<T>* left;
        TreeNode<T>* right;

        TreeNode(T val) {
            this->val = val;
            this->left = nullptr;
            this->right = nullptr;
        }
    };

********************************************************/

template<typename T>
int maxLevelSum(TreeNode<T>* root){
    if (root == nullptr) return 0;
    
    int maxSum = INT_MIN;
    queue<TreeNode<T>*> q;
    q.push(root);
    
    while (!q.empty()) {
        int levelSize = q.size();
        int levelSum = 0;
        
        for (int i = 0; i < levelSize; ++i) {
            TreeNode<T>* node = q.front();
            q.pop();
            levelSum += node->val;
            
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        
        maxSum = max(maxSum, levelSum);
    }
    
    return maxSum;
}
