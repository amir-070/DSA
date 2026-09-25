
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        if (!p && !q)
            return true;
        if (!p || !q)
            return false;

        if ((!p->left && !p->right) && (!q->left && !q->right)) {
            if (p->val == q->val)
                return true;
            else
                return false;
        }
        if (p->val != q->val) return false;
        if (((p->left == nullptr) && (q->left != nullptr))&&((p->left != nullptr) && (q->left == nullptr))&&((p->right == nullptr) && (q->right != nullptr))&&((p->right != nullptr) && (q->right == nullptr))) return false;


        return isSameTree(p->left,q->left)&isSameTree(p->right,q->right);
    }
};