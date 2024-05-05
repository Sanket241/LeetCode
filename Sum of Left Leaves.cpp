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
void solve(TreeNode* root,int &cnt,bool check){
    if(root == NULL){
        return;
    }
    if(root -> left == NULL && root -> right == NULL){
        check ? cnt += root -> val : 0;
    }
   
    solve(root -> left,cnt,true);
    solve(root -> right,cnt,false);
}
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int cnt = 0;
        solve(root,cnt,0);
        return cnt;
    }
};