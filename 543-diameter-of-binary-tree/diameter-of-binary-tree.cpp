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
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);
        int maxi=max(left,right);
        int totalh=maxi+1;
        return totalh;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int option1=diameterOfBinaryTree(root->left);
        int option2=diameterOfBinaryTree(root->right);
        int option3=height(root->left)+height(root->right);
        int maxdiameter=max(option1,max(option2,option3));
        return maxdiameter;
        
    }
};