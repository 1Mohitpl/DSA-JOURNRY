 int hight(TreeNode* root){
        if(root == NULL){
            return 0;
        }

        int leftHight = hight(root->left);
        int rightHight  = hight(root->right);
        int finalhight = max(leftHight, rightHight) +1;
         return finalhight;
      }

    bool isBalanced(TreeNode* root) {
        // base-case
        if(root == NULL){
            return true;
        }

        // current node solve 
        int lefthight = hight(root->left);
        int righthight = hight(root->right);
         
         int diff = abs(lefthight-righthight);

         bool currentnode = (diff <= 1);
        bool leftAns = isBalanced(root->left);
        bool rightAns = isBalanced(root->right);

        if(currentnode && leftAns && rightAns){
            return true;
        } else{
            return false;
        }
    }