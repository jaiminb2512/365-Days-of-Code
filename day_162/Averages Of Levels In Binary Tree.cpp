#include <bits/stdc++.h> 

using namespace std;

/********************************

    Following is the Binary Tree node structure

    template <typename T>
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
    
********************************/

vector<long long> averageOfLevels(BinaryTreeNode<int>* root) {
    if (root == nullptr) return {};

    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    vector<long long> ans;

    while (!q.empty()) {
        int levelSize = q.size();
        long long levelSum = 0;

        for (int i = 0; i < levelSize; ++i) {
            BinaryTreeNode<int>* node = q.front();
            q.pop();
            levelSum += node->data;

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        long long levelAvg = levelSum / levelSize;
        ans.push_back(levelAvg);
    }

    return ans;
}