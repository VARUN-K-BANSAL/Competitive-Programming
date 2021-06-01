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
    bool hasPathSum(TreeNode* root, int sum) {
    return (NULL != root)
            && ((NULL != root->left && hasPathSum(root->left, sum - root->val))
            || (NULL != root->right && hasPathSum(root->right, sum - root->val))
            || (NULL == root->left && NULL == root->right && sum == root->val));
    }
};