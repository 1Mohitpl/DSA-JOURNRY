#include<iostream>
using namespace std;

class Node {
   public:
   int data;
   Node* left;
   Node* right;


   Node(int val){      // constructor 
    this->data = val;
    this->left = NULL;
    this->right = NULL;
  }
  // returns root node of the created tree

};
  
  Node* createTree(){
    cout << "Enter an Vlaue for node : " << endl;
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }
    Node* root = new Node( data);  // create root node first step done
    
    //step2 create left sub-tree
    cout << "for left node :" << root->data  <<endl;
    root->left = createTree();    // done by recurrsion 
    //step3 create right sub-tree
    cout << "for right node :" << root->data << endl;
    root->right = createTree();   // done by recurrsion 
    

    return root;
    

  }

void preorderTraversal(Node* root){
     // base case
     if(root == NULL){
        return;
     }
     
    // root left right
    cout << root->data << " ";

    // now proces left part
    preorderTraversal(root->left);

    // now proces the right part
    preorderTraversal(root->right);

}

void inorderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}


Node* constructTreefromPreAndInorderTraversal(int preorder[], int inorder[], int preIndex, int inorderstart, int inorderEnd, int size ){
      if(preIndex>= size || int inorderstart)
       
}

int main (){
     
     int inorder[] = {10,8,6,2,4, 12};
     int preorder[] = {2, 8, 10, 6, 4, 12};

    int size = 6;
    int preorderIndex = 0;
    int inorderstart =  0;
    int inorderEnd = 5;

}