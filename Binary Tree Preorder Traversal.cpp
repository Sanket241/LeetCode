
class Solution {
public:
vector<int>ans;
void pre(TreeNode* root){
    ans.push_back(root -> val);
   if(root -> left) pre(root -> left);
    if(root -> right)pre(root -> right);
}
    vector<int> preorderTraversal(TreeNode* root) {
        if(root ==NULL) return ans;
        pre(root);
        return ans;
    }
};