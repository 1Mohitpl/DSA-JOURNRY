 TreeNode* searchBST(TreeNode* root, int val) {
           if(root == NULL){
            return NULL;
           }
        if(root->val == val){
             return root;
        }
        TreeNode* leftans = NULL;
        TreeNode* rightans = NULL;
        
        if(val > root->val) {
            rightans = searchBST(root->right, val);
        } else {
            leftans = searchBST(root->left, val);
        }
        
        return leftans != NULL ? leftans : rightans;
    }