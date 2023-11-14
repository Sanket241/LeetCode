/*
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
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if(!root) return 0;
        int levels = 0;
        queue<Node*>q;q.push(root);
        while(!q.empty()){
            size_t size = q.size();
            levels++;
            for(int i=0;i<size;i++){
                Node* curr=q.front(); q.pop();
                for(Node*&child:curr->children) q.push(child);
            }
        }
        return levels;
    }
};