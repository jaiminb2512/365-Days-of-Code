#include <bits/stdc++.h>

/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;
        TreeNode<T> *next;

        TreeNode(T data)
        {
            this->data = data;
            left = NULL;
            right = NULL;
            next = NULL;
        }
    };

************************************************************/

void inorderSuccessor(TreeNode<int> *root)
{
    stack<TreeNode<int>*> st;
    TreeNode<int>* current = root;
    TreeNode<int>* prev = nullptr;

    while (current || !st.empty()) {
        while (current) {
            st.push(current);
            current = current->left;
        }

        current = st.top();
        st.pop();

        if (prev) {
            prev->next = current;
        }

        prev = current;
        current = current->right;
    }

    if (prev) {
        prev->next = nullptr;
    }
}
