
class Solution {
public:
    void postorder(vector<int>& temp, TreeNode* root) {
        if (!root)
            return;

        postorder(temp, root->left);
        postorder(temp, root->right);
        temp.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        postorder(res,root);

        return res;
    }
};