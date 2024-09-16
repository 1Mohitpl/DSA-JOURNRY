Node* findSucc(Node* root){
     Node* succ = 0;
     Node* temp = root;

    while(temp){
        if(temp->data < root->data){
            succ = temp;
            temp = temp->left;
        } else{
            temp = temp->right;
        }
    }
    return succ;
}

 void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        // Your code goes here
        Node* curr = root;
        if(curr->left > key){
           suc = curr;
             curr = curr->left;
        } else{
             pre = curr;
             curr = curr->right;
        }
    
    }