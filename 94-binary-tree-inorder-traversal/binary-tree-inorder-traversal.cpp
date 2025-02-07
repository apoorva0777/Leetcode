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
    vector<int> inorderTraversal(TreeNode* node) {
        if(node==NULL) return {};
        vector<int>left=inorderTraversal(node->left);
        left.push_back(node->val);
        vector<int>right=inorderTraversal(node->right);
        for(int i=0;i<right.size();i++){
            left.push_back(right[i]);
        }
        return left;
    }
};