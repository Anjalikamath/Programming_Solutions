/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    void preorder(TreeNode*root,string &data){
        
        if (!root)
        {
            data += '*'; //marker for leaf node
            return;
        }
        
        data + =to_string(root->val);
        data += '/'; //to denote end of that particular number
        preorder (root->left, data);
        preorder (root->right, data);
        
        
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        
        string data;
        preorder(root,data);
        //cout<<data;
        return data;
    }

    TreeNode*deserializeUtil(string data, int &ptr){

        if(data[ptr] == '*')
        {
            ptr++;
            return NULL;
        }
        
        int num = 0;
        while(ptr < data.size() && data[ptr] != '/')
        {
            num= num * 10 + (data[ptr]-'0');
            ptr++;
        }
        
        TreeNode* root = new TreeNode(num);
        ptr++;
        root->left = deserializeUtil(data, ptr);
        root->right = deserializeUtil(data, ptr);
        return root;
        
    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        
        int ptr=0;
        return deserializeUtil(data, ptr);
        
        
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;