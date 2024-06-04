/**********************************************************
        Following is the Binary Tree Node class structure

        template <typename T>
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

***********************************************************/

vector<int> printLeftRightMostNodes(BinaryTreeNode<int>* root) {
    vector<int> ans;
    if (root == nullptr)
        return ans;

    queue<pair<BinaryTreeNode<int>*, int>> q;
    q.push({root, 0});

    while (!q.empty()) {
        int levelSize = q.size();
        int leftMost = -1, rightMost = -1;

        for (int i = 0; i < levelSize; ++i) {
            BinaryTreeNode<int>* node = q.front().first;
            int level = q.front().second;
            q.pop();

            if (i == 0)
                leftMost = node->data;
            if (i == levelSize - 1)
                rightMost = node->data;

            if (node->left)
                q.push({node->left, level + 1});
            if (node->right)
                q.push({node->right, level + 1});
        }

        ans.push_back(leftMost);
        if (leftMost != rightMost)
            ans.push_back(rightMost);
    }

    return ans;
}