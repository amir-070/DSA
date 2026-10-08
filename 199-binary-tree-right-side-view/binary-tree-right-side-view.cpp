class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;

        if(!root) return ans;

        queue<TreeNode*> q;
        q.push(root);
        q.push(nullptr);


        int curr;

        while(!q.empty())
        {
            TreeNode* temp = q.front();
            q.pop();
            if(temp) curr = temp->val;
            else
            {
                if(q.empty())
                {
                    ans.push_back(curr);
                    return ans;
                }
                else
                {
                    ans.push_back(curr);
                    q.push(nullptr);
                }
                continue;
            }
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }

        return ans;
    }
};