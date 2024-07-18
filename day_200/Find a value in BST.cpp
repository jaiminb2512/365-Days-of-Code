#include <bits/stdc++.h> 
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

bool findNode(TreeNode <int> * root, int key) {

    while(root != NULL){
        if(root -> data == key){
            return true;
        }

        if(root -> data > key){
            root = root ->left;
        }

        else{
            root = root -> right;
        }
    }
    return false;
}