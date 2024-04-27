/*****************************************************

    Following is the Binary Tree node structure:
    
    class BinaryTreeNode {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if(left) 
                delete left;
            if(right) 
                delete right;
        }
    };

******************************************************/


bool isSymmetricHelper(BinaryTreeNode<int>* left, BinaryTreeNode<int>* right){

    if(left == nullptr && right == nullptr){
        return true;
    }

    if(left == nullptr || right == nullptr)
        return false;

    return (left->data == right->data) && isSymmetricHelper(left->left, right->right);
    
}

bool isSymmetric(BinaryTreeNode<int>* root)
{
    if(root == nullptr){
        return true;
    }


    return isSymmetricHelper(root->left, root->right);
}