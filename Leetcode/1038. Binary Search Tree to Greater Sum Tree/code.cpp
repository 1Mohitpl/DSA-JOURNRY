void solve(TreeNode* root, int &nodesum){
    if(!root) {  // if at root has null
        return;
    }
    solve(root->right, nodesum);   // covering the right part 
    nodesum += root->val;

    root->val= nodesum;
    solve(root->left, nodesum);    // covering the left part

}
    TreeNode* bstToGst(TreeNode* root) {

        int nodesum = 0;
        solve (root, nodesum);
        
        return root;
    }