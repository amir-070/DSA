
class Solution {

public:
    int helper(TreeNode* root,int maxdepth)
    {
        if(!root->left && !root->right) return maxdepth;

        int d1 = 0,d2 = 0;
        if(root->left) d1 = helper(root->left,maxdepth+1);
        if(root->right) d2 = helper(root->right,maxdepth+1);

        return max(d1,d2);
    }
    int maxDepth(TreeNode* root) {
        if(!root) return 0;

        return helper(root,1);
    }
};