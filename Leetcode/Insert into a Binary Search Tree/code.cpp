TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL){
            root = new TreeNode(val);
            return root;
        }

        // if its not  the root then it is left part either right part
        // left part

        if(val > root->val){
       root->right =  insertIntoBST(root->right, val);
        }
       if(val< root->val){
          root->left = insertIntoBST(root->left, val);
       }
        return root;
    }