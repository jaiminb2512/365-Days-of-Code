/*************************************************************

    Following is the Binary Tree node structure
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };

*************************************************************/

pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    pair<int, int> result;
    TreeNode *predecessor = nullptr;
    TreeNode *successor = nullptr;

    while (root != nullptr) {
        if (root->data == key) {
            if (root->left != nullptr) {
                predecessor = root->left;
                while (predecessor->right != nullptr)
                    predecessor = predecessor->right;
            }
            if (root->right != nullptr) {
                successor = root->right;
                while (successor->left != nullptr)
                    successor = successor->left;
            }
            break;
        } else if (root->data > key) {
            successor = root;
            root = root->left;
        } else {
            predecessor = root;
            root = root->right;
        }
    }

    result.first = (predecessor != nullptr) ? predecessor->data : -1;
    result.second = (successor != nullptr) ? successor->data : -1;

    return result;
}