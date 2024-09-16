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