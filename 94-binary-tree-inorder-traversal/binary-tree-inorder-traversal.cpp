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
        vector<int>s;
        inorder(root,s);
        return s;
    }
    void inorder(TreeNode* root,vector<int>&s){
        if(root==NULL){
            return;
        }
        inorder(root->left,s);
        s.push_back(root->val);
        inorder(root->right,s);
    }
};