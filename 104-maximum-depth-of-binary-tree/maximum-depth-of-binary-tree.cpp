
class Solution {

public:
    int helper(TreeNode* root,int maxdepth)
    {
        if(!root->left && !root->right) return maxdepth;

        int depth1 = 0,depth2 = 0;
        if(root->left) depth1 = helper(root->left,maxdepth+1);
        if(root->right) depth2 = helper(root->right,maxdepth+1);

        return max(depth1,depth2);
    }
    int maxDepth(TreeNode* root) {
        if(!root) return 0;

        return helper(root,1);
    }
};