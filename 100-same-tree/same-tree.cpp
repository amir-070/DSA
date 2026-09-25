
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        // hour of thinking for this solution
        // if (!p && !q)
        //     return true;
        // if (!p || !q)
        //     return false;

        // if ((!p->left && !p->right) && (!q->left && !q->right)) {
        //     if (p->val == q->val)
        //         return true;
        //     else
        //         return false;
        // }
        // if (p->val != q->val) return false;
        // if ((!p->left && q->left)&&(p->left && !q->left)&&(!p->right && q->right)&&(p->right && !q->right)) return false;


        // return isSameTree(p->left,q->left)&isSameTree(p->right,q->right);

        // actual solution

        if (p == NULL && q == NULL) return true;

        if (p == NULL || q == NULL) return false;

        if (p->val == q->val) return isSameTree(p->left, q->left) & isSameTree(p->right, q->right);

        return false;
    }
};