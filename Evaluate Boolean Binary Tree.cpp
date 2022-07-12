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
    bool evaluateTree(TreeNode* root) {
        if(root==NULL) return true;
        evaluateTree(root->left);
        evaluateTree(root->right);
        if(root->left!=NULL && root->right!=NULL){
            if(root->val==3) root->val=(root->left->val && root->right->val);
            else root->val=(root->left->val || root->right->val);
        }
        return root->val;
        
    }
};
