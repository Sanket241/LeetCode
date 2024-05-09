
class Solution {
public:
    // Helper function to find the index of 'data' in the inorder vector
    int find(vector<int>& inorder, int data, int start, int end) {
        for (int i = start; i <= end; i++) {
            if (inorder[i] == data) {
                return i;
            }
        }
        return -1; // Not found (this case shouldn't be hit if input is valid)
    }

    // Recursive function to build the tree
    TreeNode* buildTreeHelper(vector<int>& preorder, vector<int>& inorder, int& preIndex, int inStart, int inEnd) {
        if (inStart > inEnd) {
            return nullptr;
        }
        
        // Get the current root value from preorder
        int rootValue = preorder[preIndex];
        preIndex++; // Move to the next element in preorder

        // Find the index of rootValue in inorder
        int inIndex = find(inorder, rootValue, inStart, inEnd);

        // Create a new TreeNode with the current root value
        TreeNode* root = new TreeNode(rootValue);

        // Recursively build the left and right subtrees
        root->left = buildTreeHelper(preorder, inorder, preIndex, inStart, inIndex - 1);
        root->right = buildTreeHelper(preorder, inorder, preIndex, inIndex + 1, inEnd);

        return root;
    }

    // Main function to build the tree using preorder and inorder traversals
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIndex = 0; // Start with the first element of preorder
        int n = inorder.size();
        return buildTreeHelper(preorder, inorder, preIndex, 0, n - 1);
    }
};