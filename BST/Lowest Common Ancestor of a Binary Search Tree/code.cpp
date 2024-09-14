TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // base case
        if(root == NULL){
            return NULL;
        }
        // p & q both are left suntree
        if(p->val < root->val && q->val < root->val){
            TreeNode* leftans = lowestCommonAncestor(root->left, p, q);
            return leftans;
        }
        // p & q both are right subtree
        if(p->val > root->val && q->val > root->val){
            TreeNode* rightans = lowestCommonAncestor(root->right, p, q);
            return rightans;
        }

        // p left and q right
        if(p->val < root->val && q->val > root->val){
            return root;
        }

        return root;
    }