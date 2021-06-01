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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack <TreeNode*> s;
        TreeNode *n = root;
        while(1){
            if(n != NULL){
                s.push(n);
                n = n->left;
            }
            else if(!s.empty()){
                ans.push_back(s.top()->val);
                n = s.top()->right;
                s.pop();
            }
            else
                break;
        }
        return ans;
    }
};