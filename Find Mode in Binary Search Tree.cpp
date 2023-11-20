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
void check(TreeNode* root,int &currVal,int &currCnt, int &currMax,vector<int>&ans){
    if(root == NULL){
        return;
    }
    check(root->left,currVal, currCnt, currMax,ans);
    if(root->val == currVal){
        currCnt++;
    }
    else{
        currVal = root -> val;
        currCnt = 1;
    }
    if(currCnt > currMax){
        currMax = currCnt;
        ans.clear();
        ans.push_back(currVal);
    }
    else if(currCnt == currMax){
        ans.push_back(currVal);
    }
    check(root->right,currVal, currCnt, currMax,ans);
}
    vector<int> findMode(TreeNode* root) {
        vector<int>ans;
        if(root == NULL){
            return ans;
        }
        int currVal = 0;
        int currCnt = 0;
        int currMax = 0;
        check(root,currVal, currCnt, currMax,ans);
        return ans;
    }
};