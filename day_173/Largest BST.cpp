/************************************************************

    Following is the Binary Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/

template<typename T>
struct BSTInfo {
    bool isBST;
    int minVal;
    int maxVal;
    int size;

    BSTInfo(bool isBST, int minVal, int maxVal, int size) : isBST(isBST), minVal(minVal), maxVal(maxVal), size(size) {}
};

template<typename T>
BSTInfo<T> largestBSTHelper(TreeNode<T>* root) {
    if (root == nullptr) {
        return BSTInfo<T>(true, INT_MAX, INT_MIN, 0);
    }

    BSTInfo<T> leftInfo = largestBSTHelper(root->left);
    BSTInfo<T> rightInfo = largestBSTHelper(root->right);

    if (!leftInfo.isBST || !rightInfo.isBST || root->data <= leftInfo.maxVal || root->data >= rightInfo.minVal) {
        return BSTInfo<T>(false, 0, 0, smax(leftInfo.size, rightInfo.size));
    }

    int size = 1 + leftInfo.size + rightInfo.size;

    return BSTInfo<T>(true, min(root->data, leftInfo.minVal), max(root->data, rightInfo.maxVal), size);
}

template<typename T>
int largestBST(TreeNode<T>* root) {
    return largestBSTHelper(root).size;
}