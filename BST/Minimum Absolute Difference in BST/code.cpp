int mindiff = INT_MAX;

   void inorder(TreeNode* root, TreeNode* &prev){
       
             if(root == NULL){
                return;
             }
           inorder(root->left, prev);
            if(prev != NULL ){
                mindiff = min(mindiff, (root->val - prev->val));
            }
            prev = root;
            inorder(root->right, prev);
   }
    int getMinimumDifference(TreeNode* root) {
        TreeNode* prev = NULL;
        inorder(root, prev);
         return mindiff;
    }