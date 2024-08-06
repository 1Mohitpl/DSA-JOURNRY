void solve(TreeNode* root, int targetSum, int sum, vector<int>& result, vector<vector<int>>& ans) {
    if (root == NULL) {
        return;
    }
    sum += root->val;
    result.push_back(root->val);
    if (root->left == NULL && root->right == NULL && sum == targetSum) {
        ans.push_back(result);
    } else {
        solve(root->left, targetSum, sum, result, ans);
        solve(root->right, targetSum, sum, result, ans);
    }
    result.pop_back();
}
       
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        int sum =0;
        vector<int>result;
        solve(root, targetSum, sum, result, ans);
        return ans;
    }