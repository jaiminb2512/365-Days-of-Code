/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
TreeNode<int> *buildTreeUtil(vector<int> &inorder, vector<int> &preorder, int inStart, int inEnd, int& preIndex) {
    if (inStart > inEnd) return nullptr;

    TreeNode<int>* root = new TreeNode<int>(preorder[preIndex++]);

    int inIndex;
    for (int i = inStart; i <= inEnd; i++) {
        if (inorder[i] == root->data) {
            inIndex = i;
            break;
        }
    }

    root->left = buildTreeUtil(inorder, preorder, inStart, inIndex - 1, preIndex);
    root->right = buildTreeUtil(inorder, preorder, inIndex + 1, inEnd, preIndex);

    return root;
}

TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder) {
    int preIndex = 0;
    int n = inorder.size();
    return buildTreeUtil(inorder, preorder, 0, n - 1, preIndex);
}