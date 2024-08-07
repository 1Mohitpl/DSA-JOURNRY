#include<iostream>
#include<queue>
using namespace std;

class Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data= val;
        this->left = NULL;
        this->right = NULL;
        
    }


};

Node* createTree(){
    cout << "Enter the root element :" << endl;
    int data;
    cin>> data;

    if(data == -1){
        return NULL;
    }

    Node* root = new  Node(data); // root node created 
  
   // left node creatiion 
   root->left = createTree();
   // right side tree creation
   root->right = createTree();

   return root;
}

void preorder(Node* root) {
    if(root == NULL){
        return;
    }

    cout << root->data << endl;
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root){
    if(root == NULL){
        return NULL;
    }

    inorder(root->left);
    cout << root->data << endl;
    inorder(root->left);
    
}

void postorder(Node* root) {
    if(root == NULL){
        return;
    }

    postorder(root->left);
    preorder(root->right);
    cout << root->data <<endl;
}




int main (){


}