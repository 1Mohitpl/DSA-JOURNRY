int ans = 0;
    void pathfromOneRoot(TreeNode* root, long long sum){
        if(root == NULL){
            return;
        }

        if(sum == root->val){
            ans++;
        }

        pathfromOneRoot(root->left, sum- root->val);
         pathfromOneRoot(root->right, sum- root->val);


    }
    int pathSum(TreeNode* root, long long targetSum) {
            if(root!= NULL){
            pathfromOneRoot(root, targetSum);
            pathSum(root->left, targetSum);
           pathSum(root->right, targetSum);
                
            }
            

            return ans;

    }