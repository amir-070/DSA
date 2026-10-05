
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        if(!root) return {};

        vector<vector<int>> res;
        vector<int> temp;
        queue<TreeNode*> q;

        
        q.push(root);
        q.push(NULL);

        while(!q.empty())
        {
            TreeNode* tmp = q.front();
            q.pop();
            if(tmp == NULL)
            {
                res.push_back(temp);
                temp.clear();
                if(!q.empty())
                {
                    q.push(NULL);
                }
            }
            else
            {
                temp.push_back(tmp->val);
                if(tmp->left) q.push(tmp->left);
                if(tmp->right) q.push(tmp->right);
            }

        }
        return res;
        
    }
};