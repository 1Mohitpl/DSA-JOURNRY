 void inorder(TreeNode* root, vector<int>& vec){
        if(root==0){     // if root is zero then return nothing
            return ;
        }

        inorder(root->left, vec);       // left side element
        vec.push_back(root->val);     // visit each node 
        inorder(root->right, vec);  // check the right side 
     }

       TreeNode* construct(int l, int r, vector<int>& vec){
           if(l>r){
            return 0;
           }

           int mid = l+(r-l)/2;

           TreeNode* root = new TreeNode(vec[mid]);

           root->left = construct(l, mid-1, vec);
           root->right= construct(mid+1, r, vec);
           return root;


       }
    TreeNode* balanceBST(TreeNode* root) {
       
       vector<int> vec;  // get the root element into the vector array
       inorder(root, vec); // call the inorder fucntion

        int l =0;
        int r = vec.size()-1;

        return construct(l, r, vec);
        
    }