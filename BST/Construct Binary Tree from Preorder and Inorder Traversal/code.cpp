int searchInorder(vector<int>& inorder, int target, int size) {
    for(int i = 0; i < size; i++) {
        if(inorder[i] == target)
            return i;
    }
    return -1;
}

TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int start, int end, int &preindex, int size) {
    if(start > end || preindex >= size) {
        return NULL;
    }

    // Create the current node (root)
    int element = preorder[preindex++];
    TreeNode* root = new TreeNode(element);

    // Find the position of the current node in inorder traversal
    int position = searchInorder(inorder, element, size);

    // Recursively build left and right subtrees
    root->left = solve(preorder, inorder, start, position - 1, preindex, size);
    root->right = solve(preorder, inorder, position + 1, end, preindex, size);

    return root;
}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    int size = preorder.size();
    int preindex = 0;
    return solve(preorder, inorder, 0, size - 1, preindex, size);
}