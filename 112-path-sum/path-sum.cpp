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
        bool is1,is2;
        if(root->left)is1 = hasPathSum(root->left,target-root->val);
        if(root->right)is2 = hasPathSum(root->right,target-root->val);
        
        return is1|is2;
    }
};