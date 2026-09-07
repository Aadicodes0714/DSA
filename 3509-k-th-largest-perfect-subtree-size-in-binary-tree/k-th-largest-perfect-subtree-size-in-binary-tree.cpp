/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    vector<int> v;

    pair<bool, int> dfs(TreeNode* root)
    {
        // Empty tree
        if (root == NULL)
        {
            return {true, 0};
        }

        // Leaf node
        if (root->left == NULL && root->right == NULL)
        {
            v.push_back(1);
            return {true, 1};
        }

        // Find left and right
        auto left = dfs(root->left);
        auto right = dfs(root->right);

        // Check perfect subtree
        if (left.first && right.first &&
            left.second == right.second)
        {
            int height = left.second + 1;

            int size = (1 << height) - 1;

            v.push_back(size);

            return {true, height};
        }

        return {false, 0};
    }

    int kthLargestPerfectSubtree(TreeNode* root, int k)
    {
        v.clear();

        dfs(root);

        // Sort in descending order
        sort(v.begin(), v.end(), greater<int>());

        if (v.size() < k)
        {
            return -1;
        }

        return v[k - 1];
    }
};