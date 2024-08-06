     bool solve(TreeNode* root, int sum, int targetSum){
            
            // check the base case
            if(root == NULL){
                return false;
            }
             sum += root->val;
            if(root->left == NULL && root->right == NULL){
                // check targetsum
                
                if(sum == targetSum){
                    return true;
                } else{
                    return false;
                }
           }

            bool leftsum  = solve(root->left, sum, targetSum);
            bool rightsum = solve(root->right, sum, targetSum);
            return leftsum || rightsum;


        }
    bool hasPathSum(TreeNode* root, int targetSum) {
          int sum = 0;
          bool ans = solve(root,sum,targetSum);
          return ans;
    }