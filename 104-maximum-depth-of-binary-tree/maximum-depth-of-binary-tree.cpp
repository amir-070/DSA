
class Solution {

public:
    int helper(TreeNode* root,int currd,int maxd)
    {
        if(!root->left && !root->right) 
        {
            maxd = max(maxd,currd);
            return maxd;
        }
        int maxdep1 = 0,maxdep2 = 0;
        if(root->left) maxdep1 = helper(root->left,currd+1,maxd);
        if(root->right) maxdep2 = helper(root->right,currd+1,maxd);

        return max(maxdep1,maxdep2);
    }
    int maxDepth(TreeNode* root) {
        if(!root) return 0;

        return helper(root,1,0);
    }
};