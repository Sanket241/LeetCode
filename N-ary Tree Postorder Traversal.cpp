#include <iostream>
#include <vector>

using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<int> ans;

    vector<int> postorder(Node* root) {
        if (root == NULL) {
            return ans;
        }

        for (Node* node : root->children) {
            ans = postorder(node);
        }

        ans.push_back(root->val);
        return ans;
    }
};

int main() {
    // Example usage:
    // Constructing a tree: 1 -> (2, 3, 4) -> (5, 6)
    Node* root = new Node(1, { new Node(2, { new Node(5), new Node(6) }), new Node(3), new Node(4) });

    Solution solution;
    vector<int> result = solution.postorder(root);

    // Print the result
    cout << "Postorder traversal: ";
    for (int value : result) {
        cout << value << " ";
    }
    cout << endl;

    // Clean up the allocated memory (optional)
    delete root; // This will recursively delete all nodes in the tree

    return 0;
}
