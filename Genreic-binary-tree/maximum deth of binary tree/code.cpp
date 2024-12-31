// using level order traversal

int maxDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        int count = 1;

        while(q.size() >1) {
            TreeNode* front  = q.front();
            q.pop();

            if(front == NULL){
                cout << endl;
                if(!q.empty()){
                    q.push(NULL);
                     count++;
                }
                

            } else {
               
                
                if(front->left != NULL){
                    q.push(front->left);
                }

                if(front->right != NULL){
                    q.push(front->right);
                }
            }
        }
        return count;
    }
