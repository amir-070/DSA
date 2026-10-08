
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {

        if (!root)
            return {};
        queue<TreeNode*> q;
        stack<TreeNode*> st;
        q.push(nullptr);
        q.push(root);

        while (!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            st.push(temp);

            if (temp == nullptr) {
                if (q.empty())
                    break;
                else
                    q.push(nullptr);

                continue;
            }

            if(temp->right) q.push(temp->right);
            if(temp->left) q.push(temp->left);
        }
        st.pop();

        vector<vector<int>> ans;
        vector<int> curr;
        while(!st.empty())
        {
            
            if(st.top() != nullptr) curr.push_back(st.top()->val);
            else
            {
                ans.push_back(curr);
                curr.clear();
            }
            st.pop();
        }

        return ans;
    }
};