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
    bool hasPathSum(TreeNode* root, int targetSum, int current_sum = 0) {
        if(root == NULL) return false;
        current_sum += root->val;
        if(root->left == NULL && root->right == NULL)
            if(current_sum == targetSum)
                return true;
        return (hasPathSum(root->left, targetSum, current_sum) || hasPathSum(root->right, targetSum, current_sum));
    }
};