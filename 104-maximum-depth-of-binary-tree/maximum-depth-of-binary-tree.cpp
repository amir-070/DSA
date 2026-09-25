
class Solution {

public:
    int helper(TreeNode* root,int maxd)
    {
        if(!root->left && !root->right) 
        {
            return maxd;
        }
        int maxdep1 = 0,maxdep2 = 0;
        if(root->left) maxdep1 = helper(root->left,maxd+1);
        if(root->right) maxdep2 = helper(root->right,maxd+1);

        return max(maxdep1,maxdep2);
    }
    int maxDepth(TreeNode* root) {
        if(!root) return 0;

        return helper(root,1);
    }
};