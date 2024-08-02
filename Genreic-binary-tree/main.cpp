#include<iostream>
#include<queue>
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

void postorderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    postorderTraversal(root->left);
    
    postorderTraversal(root->right);
    cout << root->data << " ";
}

void levelorderTreversal(Node* root){
    //base case 
    queue<Node*>q;
    q.push(root);
    q.push(NULL);


    // Now traverse the  tree
    while (q.size() > 1)
    {
        Node* front = q.front();
        q.pop();
        
        if(front == NULL){
            cout << endl;
            q.push(NULL);
        } else{
            cout << front->data << " ";

        if(front->left != NULL){
            q.push(front->left);
        }

        if(front->right != NULL){
            q.push(front->right);
        }

        }

        
    }
    
}
int main () {

  Node* root  = createTree();
//   cout << "root-Node : " << root->data << endl;

cout << "printing preorder : ";
 preorderTraversal(root);
 cout << endl;

cout << "printing postorder :";
postorderTraversal(root);
cout  << endl;

cout << "printing inorder :";
 inorderTraversal(root);
 cout  << endl;

 cout << "printing levelorder :";
 levelorderTreversal(root);
 cout  << endl;

}