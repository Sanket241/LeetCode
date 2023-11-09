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
    bool isBalanced(TreeNode* root) {
         int h = 0;
        return dfs(root, h);
    }
private:
    bool dfs(TreeNode* root, int& h) {
        if (root == NULL) {
            h = -1;
            return true;
        }

        int left = 0;
        int right = 0;

        if (!dfs(root->left, left) || !dfs(root->right, right)) {
            return false;
        }
        if (abs(left - right) > 1) {
            return false;
        }

        h = 1 + max(left, right);
        return true; 
    }
};