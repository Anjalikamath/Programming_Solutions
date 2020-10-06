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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
       TreeNode*newnode = new TreeNode(val);
        if(!root)
            return newnode;
        
        TreeNode*p=root,*q;
        while(p)
        {
            if(p->val < val)
            {
                q = p;
                p = p->right;
            }
            else if(val < p->val)
            {
                q = p;
                p = p->left;
            }
        }
        if(q->val > val)
            q->left = newnode;
        else 
            q->right = newnode;
        return root;
    }
};