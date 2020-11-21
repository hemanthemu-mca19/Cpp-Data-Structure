class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr and q==nullptr) return true;
        if((p!=nullptr and q==nullptr) || (p==nullptr and q!=nullptr)) return false;
        if(p->val != q->val) return false;
        bool check1 = isSameTree(p->left, q->left);
        bool check2 = isSameTree(p->right, q->right);
        return check1 and check2;
    }
};
