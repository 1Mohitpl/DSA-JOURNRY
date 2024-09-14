void storeInorder(TreeNode* root, vector<int>&inorder){
        // always pass by reference to store the value of root node
         if(root == NULL){
            return;
         }
       
        // left part
         storeInorder(root->left, inorder);
         //root part 
         inorder.push_back(root->val);
         // right part
         storeInorder(root->right, inorder);
     }
    
    bool findTarget(TreeNode* root, int k) {
        vector<int>inorder;
        storeInorder(root, inorder);
        int start = 0;
        int end = inorder.size()-1;

        while(start <end){
            int sum = inorder[start] + inorder[end];
            if(sum == k){
                return true;
            } 
            else if(sum < k){
               start++;
            } else{
                end--;
            }
             
           
            
        }
        return false;
    }