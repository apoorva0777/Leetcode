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
    bool isbalanced=true;
    int height(TreeNode* root){
        if(!root)return 0;
        int lft=height(root->left);
        int rt=height(root->right);

        if(abs(lft-rt)>1){
            isbalanced=false;
        }
        return max(lft,rt)+1;
    }
    bool isBalanced(TreeNode* root) {
        height(root);
        return isbalanced;
    }
};