#include <bits/stdc++.h>
using namespace std;

static const auto fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();

/*
 * Safe Buffer Sizing:
 * - LeetCode hard memory limit is usually ~256MB to 512MB per execution.
 * - 32MB (0x2000000) or 64MB (0x4000000) is plenty for dynamic node allocations 
 *   (e.g., std::unordered_set, std::unordered_map, trees) without triggering MLE.
 */

constexpr size_t BUFFER_SIZE = 0x2000000; // 32 MB buffer
alignas(std::max_align_t) static char buffer[BUFFER_SIZE];
static size_t buffer_pos = 0;

void* operator new(size_t size) {
    constexpr size_t alignment = alignof(std::max_align_t);
    size_t padding = (alignment - (buffer_pos % alignment)) % alignment;
    
    // Fallback to std::malloc if the arena buffer is completely exhausted
    if (buffer_pos + padding + size > BUFFER_SIZE) {
        void* ptr = std::malloc(size);
        if (!ptr) throw std::bad_alloc();
        return ptr;
    }
    
    char* aligned_ptr = &buffer[buffer_pos + padding];
    buffer_pos += (size + padding);
    return aligned_ptr;
}

// Sized & Unsized Delete overrides (no-op for arena speedup)
void operator delete(void*) noexcept {}
void operator delete(void*, size_t) noexcept {}
void operator delete[](void*) noexcept {}
void operator delete[](void*, size_t) noexcept {}

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
                alt = !alt;
            }
            else
            {
                reverse(curr.begin(),curr.end());
                ans.push_back(curr);
                curr.clear();
                alt = !alt;
            }

        }

        return ans;
    }
};