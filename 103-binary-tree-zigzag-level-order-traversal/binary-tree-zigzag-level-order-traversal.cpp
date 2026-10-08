class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int>curr;

        if(!root) return ans;

        queue<TreeNode*> q;

        bool alt = true;

        q.push(root);

        while(!q.empty())
        {
            int n = q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* temp = q.front();
                q.pop();
                curr.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            if(alt) 
            {
                ans.push_back(curr);
                curr.clear();
                alt = false;
            }
            else
            {
                reverse(curr.begin(),curr.end());
                ans.push_back(curr);
                curr.clear();
                alt = true;
            }

        }

        return ans;
    }
};