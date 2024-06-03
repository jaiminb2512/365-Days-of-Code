#include <bits/stdc++.h> 
/***********************************************************

	Following is the Binary Tree node structure:

	class binaryTreeNode{

	public :
		int data ;
		binaryTreeNode* left ;
		binaryTreeNode* right;

		binaryTreeNode(int data)
		{
			this -> data = data;
			this -> left = NULL;
			this -> right = NULL;
		}
	};

*********************************************************/

vector<int> findPreSuc(binaryTreeNode *root, int key)
{
	binaryTreeNode* KeyNode = root;
    int pred = -1;
    int succ = -1;
    
    while(KeyNode->data != key) {

        if(KeyNode->data > key) {
            succ = KeyNode->data;
            KeyNode = KeyNode->left;
        }
		
		else {
            pred = KeyNode->data;
            KeyNode = KeyNode->right;
        }
    }

    binaryTreeNode* leftTree = KeyNode->left;
    while(leftTree != NULL) {
        pred = leftTree->data;
        leftTree = leftTree->right;
    }

    binaryTreeNode* rightTree = KeyNode->right;
    while(rightTree != NULL){
        succ = rightTree->data;
        rightTree = rightTree->left;
    }

	vector<int> ans;
	ans.push_back(pred);
	ans.push_back(succ);

	return ans;
}
