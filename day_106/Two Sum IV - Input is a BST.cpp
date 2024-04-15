#include <bits/stdc++.h> 
// Following is the Binary Tree node structure
/**************
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
    
};
***************/

bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	stack<BinaryTreeNode<int>*> leftStack;
    stack<BinaryTreeNode<int>*> rightStack;

    BinaryTreeNode<int>* currentLeft = root;
    while (currentLeft != NULL) {
        leftStack.push(currentLeft);
        currentLeft = currentLeft->left;
    }

    BinaryTreeNode<int>* currentRight = root;
    while (currentRight != NULL) {
        rightStack.push(currentRight);
        currentRight = currentRight->right;
    }

    while (!leftStack.empty() && !rightStack.empty()) {
        BinaryTreeNode<int>* leftNode = leftStack.top();
        BinaryTreeNode<int>* rightNode = rightStack.top();

        if (leftNode == rightNode) {
            break;
        }

        int sum = leftNode->data + rightNode->data;

        if (sum == target) {
            return true;
        }

        if (sum < target) {
            leftStack.pop();
            currentLeft = leftNode->right;
            while (currentLeft != NULL) {
                leftStack.push(currentLeft);
                currentLeft = currentLeft->left;
            }
        } else {
            rightStack.pop();
            currentRight = rightNode->left;
            while (currentRight != NULL) {
                rightStack.push(currentRight);
                currentRight = currentRight->right;
            }
        }
    }

    return false; 

}