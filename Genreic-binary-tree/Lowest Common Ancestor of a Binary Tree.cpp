TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        // check the base cases
          if(root == NULL){
            return NULL;
          }

          if(root == p){
            return p;
          }
          if(root == q){
            return q;
          }
      
      TreeNode* leftvalue = lowestCommonAncestor(root->left, p, q);
      TreeNode* rightvalue = lowestCommonAncestor(root->right, p, q);

        if(leftvalue == NULL && rightvalue == NULL){
            return NULL;
        } else if(leftvalue == NULL && rightvalue != NULL){
            return rightvalue;
        } else if(leftvalue != NULL && rightvalue == NULL){
            return leftvalue;
        } else{
            return root;
        }

      


    }