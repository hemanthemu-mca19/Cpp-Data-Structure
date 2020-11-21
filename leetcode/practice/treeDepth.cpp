class Solution {
public:
    int maxDepth(TreeNode* root) {
        
        if(root==nullptr) return 0;
    
        int d1 = 1+ maxDepth(root->left);
        int d2 = 1+maxDepth(root->right);
        
        return max(d1,d2);
    }
};
