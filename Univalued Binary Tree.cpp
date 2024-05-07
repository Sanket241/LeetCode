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
void solve(TreeNode* root, int chk, bool &ans){
    if(root == NULL){
        return;
    }
    if(root -> val != chk){
        ans = false;
    }
    solve(root -> left,chk,ans);
    solve(root -> right,chk,ans);
}
    bool isUnivalTree(TreeNode* root) {
        if(root == NULL){
            return false;
        }
        int chk = root -> val;
        bool ans = true;
        solve(root,chk,ans);
        return ans;

    }
};