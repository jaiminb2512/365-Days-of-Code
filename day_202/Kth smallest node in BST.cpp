/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(T x) : data(x), left(NULL), right(NULL) {}
        TreeNode(T x, TreeNode<T> *left, TreeNode<T> *right) : data(x), left(left), right(right) {}
    };

************************************************************/
void inorderTraversal(TreeNode<int>* root, vector<int>& result) {
    if (root == nullptr) return;
    inorderTraversal(root->left, result);
    result.push_back(root->data); 
    inorderTraversal(root->right, result);
}

int kthSmallest(TreeNode<int> *root, int k)
{
    vector<int> result;
    inorderTraversal(root, result);
    return result[k-1];
}