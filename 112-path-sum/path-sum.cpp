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
    bool hasPathSum(TreeNode* root, int target) {
        if(!root) return false;
        if(!root->left and !root->right)
        {
            target -= root->val; 
            if(target == 0) return true;
            return false;
        }
        bool istrue;
        if(root->left)istrue = hasPathSum(root->left,target-root->val);
        if(root->right)istrue = istrue|hasPathSum(root->right,target-root->val);
        
        return istrue;
    }
};