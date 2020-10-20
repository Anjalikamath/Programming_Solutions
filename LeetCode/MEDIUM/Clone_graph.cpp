/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<Node*, Node*> mapp;
    Node* dfs(Node *node){
        if(mapp.find(node) != mapp.end()) return mapp[node];
        
        Node* clone = new Node(node->val);
        mapp[node] = clone;
        
        for(Node* ni : node->neighbors ){
            
            clone->neighbors.push_back(dfs(ni));
        }
        return clone;
    }
    
    Node* cloneGraph(Node* node) {
        
       if(node == NULL)return NULL;  
        return dfs(node);
        
    }
};