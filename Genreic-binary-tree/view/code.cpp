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

void levelorderTraversal(Node* root) {
    // first yop have to create a tree
    queue<Node*> qe;
    if(root !=NULL){
     qe.push(root);
     q.pus(NULL);
    }

    while(q.size() >1){
        Node* front = qe.front();
        qe.pop();

        if(front == NULL){
            cout << endl;
            q.push(NULL);
        } else{
            cout << front->data << endl;
        if(front->left != NULL){
            q.push(front->left);
        }

        if(front->right != NULL){
            q.push(front->right);
        }
     }
    }
}

  void printlevelView(Node* root, int level, vector<int>& leftview){
      if(root == NULL){
        return;
      }
    if(level == leftview.size()){
        // that means i got leftvew element and store it

      leftview.push_back(root->data);

    }

    printlevelView(root->left, level+1, leftview);
    printlevelView(root->right, level+1, leftview);
    

  }


int main (){
   
   
}