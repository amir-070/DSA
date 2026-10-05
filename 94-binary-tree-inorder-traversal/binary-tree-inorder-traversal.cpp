#pragma GCC optimize("Ofast")
#include <iostream>

static constexpr std::size_t max_align = alignof(std::max_align_t);
alignas(max_align) static unsigned char BUFFER[64 * 1024 * 1024];
static std::size_t pos = 0;

void *operator new(const std::size_t size) {
    const std::size_t padding = (max_align - (pos % max_align)) % max_align;
    pos += padding + size;
    return static_cast<void *>(&BUFFER[pos - size]);
}

void *operator new[](const std::size_t size) {
    return operator new(size);
}

void operator delete(void *) noexcept {}
void operator delete[](void *) noexcept {}
void operator delete(void *, std::size_t) noexcept {}
void operator delete[](void *, std::size_t) noexcept {}
static auto _ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
};
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