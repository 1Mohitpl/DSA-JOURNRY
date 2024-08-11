void solve(TreeNode* root, vector<vector<int>> &ans) {
    queue<TreeNode*> q;
    if (root == NULL) {
        return;
    }

    // Initial stage
    q.push(root);
    q.push(NULL);
    vector<int> level;  // to store the current level

    // Traversal stage
    while (q.size() > 1) {
        TreeNode* front = q.front();
        q.pop();

        if (front == NULL) {
            ans.push_back(level);  // add the current level to ans
            level.clear();  // clear the level vector for the next level
            q.push(NULL);  // mark the end of this level
        } else {
            level.push_back(front->val);
            if (front->left != NULL) {
                q.push(front->left);
            }
            if (front->right != NULL) {
                q.push(front->right);
            }
        }
    }

    ans.push_back(level);  // add the last level
}

vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> ans;
    solve(root, ans);
    return ans;
}
