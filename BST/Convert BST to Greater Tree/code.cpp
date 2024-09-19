int sum = 0;

void inorder(Node* root){
     if(root == NULL){
        return NULL;
     }
     // travers the right side of the tree

     inorder(root->right);

     // visit the node
     sum += root->val;
     root->val = sum;

     // left traversal 
     inorder(root->left);
     return sum;
}