class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {

        if (!root)
            return {};

        queue<TreeNode*> q;
        vector<vector<int>> ans;
        vector<int> curr;

        q.push(root);
        q.push(nullptr);

        while (!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();

            if (temp)
                curr.push_back(temp->val);
            else {
                if (!curr.empty()) {
                    ans.push_back(curr);
                    curr.clear();
                }

                if (q.empty())
                    break;
                else
                    q.push(nullptr);

                continue;
            }

            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }

        int i = 0, j = ans.size() - 1;

        while (i < j)
            swap(ans[i++], ans[j--]);

        return ans;
    }
};