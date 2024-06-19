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

vector<int> bottomView(TreeNode<int>* root) {
    vector<int> ans;

    if (root == nullptr) {
        return ans;
    }

    map<int, int> bottomNode;
    queue<pair<TreeNode<int>*, int>> q;

    q.push({root, 0});

    while (!q.empty()) {
        auto temp = q.front();
        q.pop();
        TreeNode<int>* frontNode = temp.first;
        int hd = temp.second;

        bottomNode[hd] = frontNode->data;

        if (frontNode->left)
            q.push({frontNode->left, hd - 1});

        if (frontNode->right)
            q.push({frontNode->right, hd + 1});
    }

    for (auto i : bottomNode) {
        ans.push_back(i.second);
    }

    return ans;
}