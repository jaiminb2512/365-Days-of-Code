#include <bits/stdc++.h> 
/**********************************************************************

Following is the Binary Tree node structure already written:

template <typename T>
class BinaryTreeNode {
public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

**********************************************************************/

int sumAtKthLevel(BinaryTreeNode<int>* root, int k)
{
	if (root == nullptr || k < 1) return 0;
    
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    
    int level = 1;
    int sum = 0;
    
    while (!q.empty()) {
        int levelSize = q.size();
        
        if (level == k) {
           
            for (int i = 0; i < levelSize; ++i) {
                BinaryTreeNode<int>* node = q.front();
                q.pop();
                sum += node->data;
                
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            
            return sum;
        }
        
        for (int i = 0; i < levelSize; ++i) {
            BinaryTreeNode<int>* node = q.front();
            q.pop();
            
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        
        level++;
    }
    
    return 0;
}