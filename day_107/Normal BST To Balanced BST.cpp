#include <iostream>
#include <vector>

/*************************************************************
    Following is the Binary Search Tree node structure

    template <typename T>
    class TreeNode
    {
    public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };

/*************************************************************/

void inOrder(TreeNode<int>* root, std::vector<int>& ans) {
    if (root == NULL)
        return;

    inOrder(root->left, ans);
    ans.push_back(root->data);
    inOrder(root->right, ans);
}

TreeNode<int>* balancedBST(std::vector<int>& arr, int start, int end) {
    if (end - start < 0)
        return nullptr;

    int mid = start + (end - start) / 2;
    TreeNode<int>* temp = new TreeNode<int>(arr[mid]);

    temp->left = balancedBST(arr, start, mid - 1);
    temp->right = balancedBST(arr, mid + 1, end);

    return temp;
}

TreeNode<int>* balancedBst(TreeNode<int>* root) {
    if (root == NULL)
        return nullptr;

    std::vector<int> arr;
    inOrder(root, arr);

    TreeNode<int>* newBST = balancedBST(arr, 0, arr.size() - 1);

    return newBST;
}
