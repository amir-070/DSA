class Solution {
public:
  
    void inorder(vector<int>& temp,TreeNode* root)
    {
        if(!root) return;

        inorder(temp,root->left);
        temp.push_back(root->val);
        inorder(temp,root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> res;

        inorder(res,root);

        return res;
        
    }
};