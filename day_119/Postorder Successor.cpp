#include <bits/stdc++.h>

/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int postOrderSuccessor(TreeNode<int> *root, int M)
{
    stack<TreeNode<int>*> st;
    vector<TreeNode<int>*> postOrder;

    TreeNode<int>* current = root;
    TreeNode<int>* lastVisited = nullptr;

    while (current || !st.empty()) {
        if (current) {
            st.push(current);
            current = current->left;
        } 
        
        else {
            TreeNode<int>* topNode = st.top();

            if (topNode->right && lastVisited != topNode->right) {
                current = topNode->right;
            } 
            
            else {
                st.pop();
                postOrder.push_back(topNode);
                lastVisited = topNode;
            }
        }
    }

    bool found = false;
    for (int i = 0; i < postOrder.size(); ++i) {
        if (found) {
            return postOrder[i]->val;
        }

        if (postOrder[i]->val == M) {
            found = true;
        }
    }
    
    return -1;
}