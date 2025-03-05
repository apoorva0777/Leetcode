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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>s;
        pre(root,s);
        return s;
    }
    void pre(TreeNode* root,vector<int>&s){
        if(root==NULL){
            return;
        }
        s.push_back(root->val);
        pre(root->left,s);
        pre(root->right,s);
    }
};