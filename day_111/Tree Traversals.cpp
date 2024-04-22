/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/

void inorder(TreeNode* root, vector<int>& traversal) {
    if (root == nullptr)
        return;
    
    inorder(root->left, traversal);
    traversal.push_back(root->data);
    inorder(root->right, traversal);
}

void preorder(TreeNode* root, vector<int>& traversal) {
    if (root == nullptr)
        return;
    
    traversal.push_back(root->data);
    preorder(root->left, traversal);
    preorder(root->right, traversal);
}

void postorder(TreeNode* root, vector<int>& traversal) {
    if (root == nullptr)
        return;
    
    postorder(root->left, traversal);
    postorder(root->right, traversal);
    traversal.push_back(root->data);
}

vector<vector<int>> getTreeTraversal(TreeNode *root){
    vector<vector<int>> result;
    
    vector<int> inorder_traversal;
    inorder(root, inorder_traversal);
    result.push_back(inorder_traversal);
    
    vector<int> preorder_traversal;
    preorder(root, preorder_traversal);
    result.push_back(preorder_traversal);
    
    vector<int> postorder_traversal;
    postorder(root, postorder_traversal);
    result.push_back(postorder_traversal);
    
    return result;
}