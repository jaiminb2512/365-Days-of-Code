#include <bits/stdc++.h> 
/*
template<typename T>
class BinaryTreeNode {
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

*/
int solve(pair<int, int> q,vector<int> v)
{
    int i=upper_bound(v.begin(), v.end(), q.second)-v.begin();
    int j=lower_bound(v.begin(), v.end(), q.first)-v.begin();
    return i-j;
}
void inorder(BinaryTreeNode<int> *root,vector<int>&v)
{
    if(!root)return ;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}
vector<int> bstQueries(BinaryTreeNode<int> *root, int q, vector<pair<int, int>> queries) {
		// Write your code here.
    if(root==NULL || q==0)
    {
        vector<int> ans;
        ans.push_back(0);
        return ans;
    }
    vector<int>v;
    inorder(root,v);
    vector<int> ans;
    for(int i=0;i<q;i++)
    {
        ans.push_back(solve(queries[i],v));
    }
    return ans;
}