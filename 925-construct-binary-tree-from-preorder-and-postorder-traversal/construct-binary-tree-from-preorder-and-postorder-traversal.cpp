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
unordered_map<int, int> postIndexMap;
    int preorderIndex = 0;

    TreeNode* buildTreeHelper(vector<int>& preorder, vector<int>& postorder, int left, int right) {
        if (left > right) return nullptr;
        TreeNode* root = new TreeNode(preorder[preorderIndex++]);
        if (left == right) return root;
        int idx = postIndexMap[preorder[preorderIndex]];
        root->left = buildTreeHelper(preorder, postorder, left, idx);
        root->right = buildTreeHelper(preorder, postorder, idx + 1, right - 1);
        return root;
    }

public:
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        for (int i = 0; i < postorder.size(); ++i) {
            postIndexMap[postorder[i]] = i;
        }
        return buildTreeHelper(preorder, postorder, 0, postorder.size() - 1);
    }
};

void inorderTraversal(TreeNode* root) {
    if (root == nullptr) return;
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
};