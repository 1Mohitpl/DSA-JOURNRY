class Solution {
public:
    bool ismirrorTree(TreeNode* p, TreeNode* q) {
        if(!p && !q)
            return true;
        
        if(p == NULL || q == NULL)
            return false;
        
        if(p->val != q->val)
            return false;
        
        return ismirrorTree(p->left, q->right) && ismirrorTree(p->right, q->left);
    }
    bool isSymmetric(TreeNode* root) {
        return ismirrorTree(root->left, root->right);
        
    }
};