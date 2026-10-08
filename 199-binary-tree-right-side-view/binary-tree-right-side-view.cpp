#pragma GCC optimize("O3,fast-math,unroll-loops")

#include <bits/stdc++.h>
using namespace std;

static constexpr size_t max_align = alignof(max_align_t);
alignas(max_align) static unsigned char BUFFER[64 * 1024 * 1024];
static size_t pos = 0;

void *operator new(const size_t size) {
    const size_t padding = (max_align - (pos % max_align)) % max_align;
    pos += padding + size;
    return static_cast<void *>(&BUFFER[pos - size]);
}

void *operator new[](const size_t size) { return operator new(size); }
void operator delete(void *) noexcept {}
void operator delete[](void *) noexcept {}
void operator delete(void *, size_t) noexcept {}
void operator delete[](void *, size_t) noexcept {}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();

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