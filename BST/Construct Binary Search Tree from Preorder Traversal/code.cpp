// brut force technique

TreeNode* Insertbst(TreeNode* root, int val){
     if(root == NULL){
         root = new TreeNode(val);
         return root;
     }
     if(val< root->val){
        root->left = Insertbst(root->left, val);
     }
     
     if(val> root->val){
        root->right = Insertbst(root->right, val);
     }

     return root;
   }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.empty()){
            return NULL;
        }
        int n = preorder.size();
       TreeNode* root = new TreeNode(preorder[0]);
        for(int i=0; i<n; i++){
            root= Insertbst(root, preorder[i]);
        }

        return root;
    }