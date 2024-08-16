#include<iostream>
#include<queue>
using namespace std;

class Node{
  public:
    int data;
    Node* left;
    Node* right;

    Node (int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertIntoBST(Node* root, int data){
      if(root == NULL){
        root = new Node(data);
        return root;
      }
      // if its not the root and insert left and right subtree
      if(data > root->data){
      root->right =  insertIntoBST(root->right, data);
      }
      if(data<root->data){
        root->left =  insertIntoBST(root->left, data);
      }

      return root;
}

void createBst(Node* &root){
  cout << "Enter root value : " << endl;
   int data;
   cin >> data;
  
 while (data != -1)
 {
    root = insertIntoBST(root, data);
    cout << "Enter an data :";
    cin >> data;

 }

}

void levelOrderTraversal(Node* root){
   if(root == NULL){
    return;
   }
   queue<Node*> q;
   q.push(root);
   q.push(NULL);

   while(q.size()>1){
       
       Node* curr = q.front();
       q.pop();

    if(curr == NULL){
      cout << endl;
      q.push(NULL);
    } else{
        cout << curr->data<<" ";
        if(curr->left != NULL){
          q.push(curr->left);
        }

        if(curr->right != NULL){
          q.push(curr->right);
        }
    }


   }
}


int main(){
          
    Node* root = NULL;
    createBst(root);
    levelOrderTraversal(root);


    return 0;
}