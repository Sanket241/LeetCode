#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == nullptr) return ans; // Return empty result if the tree is empty
        
        queue<TreeNode*> q;
        q.push(root);
        q.push(nullptr); // Use nullptr as a level delimiter
        
        vector<int> levelValues; // To store node values at each level
        
        while (!q.empty()) {
            TreeNode* curr = q.front();
            q.pop();
            
            if (curr == nullptr) {
                // End of current level
                ans.push_back(levelValues); // Push collected values for the current level
                levelValues.clear(); // Clear for the next level
                
                if (!q.empty()) {
                    q.push(nullptr); // Add level delimiter for the next level
                }
            } else {
                // Process current node
                levelValues.push_back(curr->val); // Collect node value
                
                // Enqueue left and right children if they exist
                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
            }
        }
        
        return ans;
    }
};

int main(){
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    
    Solution s;

    vector<vector<int>> result = s.levelOrder(root);
      cout << "Level-order traversal:" << endl;
    for (const auto& level : result) {
        cout << "[";
        for (int val : level) {
            cout << val << " ";
        }
        cout << "]" << endl;
    }
    
    
    return 0;
}