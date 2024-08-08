 int diaM = 0;
     // first rihht the hight of a tree
     int hight(TreeNode* root){
        if(root == NULL){
            return 0;
        }

        // now traverse to the left of node of the tree
        int leftH = hight(root->left);
        int rightH = hight(root->right);
        int curD = leftH + rightH;
         diaM = max(diaM, curD); 
        int maxH = max(leftH, rightH) +1;
        return maxH;
     }
    int diameterOfBinaryTree(TreeNode* root) {
        hight(root);
        return diaM;
    }