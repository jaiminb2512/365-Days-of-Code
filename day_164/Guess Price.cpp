#include <bits/stdc++.h> 
/*
Structure of the Node of the BST is :

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val) 
    {
        data = val;
        left = right = NULL;
    }
};
*/

int solve(Node* root, int ans){

    if(root == nullptr)
        return ans;
    
    ans = min(ans, root->data); 

    ans = solve(root->left, ans); 
    ans = solve(root->right, ans); 

    return ans; 
}

int findPrice(Node* root)
{
    int ans = INT_MAX;
    return solve(root, ans);    
}