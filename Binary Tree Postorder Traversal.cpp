#include <vector>
#include<iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    std::vector<int> ans;

    void reverse(TreeNode* root) {
        if (root->left) reverse(root->left);
        if (root->right) reverse(root->right);
        ans.push_back(root->val);
    }

    std::vector<int> postorderTraversal(TreeNode* root) {
        if (root == nullptr) {
            return ans;
        }
        reverse(root);
        return ans;
    }
};

int main() {
    // You can create a binary tree and call the postorderTraversal function on it.
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution solution;
    std::vector<int> result = solution.postorderTraversal(root);

    // Print the result
    for (int val : result) {
        std::cout << val << " ";
    }

    // Clean up memory (optional)
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
