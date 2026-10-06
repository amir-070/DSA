
class Solution {
public:
    void findleaf(TreeNode* root,vector<int> &vt)
    {
        if(!root) return;

        if(!root->left && !root->right) vt.push_back(root->val);

        findleaf(root->left,vt);
        findleaf(root->right,vt);

    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {

        vector<int> v1,v2;

        findleaf(root1,v1);
        findleaf(root2,v2);

        if(v1.size() != v2.size()) return false;

        int n = v1.size();

        for(int i=0;i<n;i++)
        {
            if(v1[i]!=v2[i] ) return false;
        }

        return true;
    }
};