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

void preOrder(Node* root){
  if(root == NULL){
    return;
  }

  cout << root->data << " ";
  preOrder(root->left);
  preOrder(root->right);
}

void inOrder(Node* root){
  if(root == NULL){
    return;
  }
  
  preOrder(root->left);
  cout << root->data << " ";
  preOrder(root->right);
}

void postOrder(Node* root){
   if(root == NULL){
    return;
   }
  
  postOrder(root->left);
  postOrder(root->right);
  cout << root->data << " ";
}

Node* minValue(Node* root){
  if(root == NULL){
    return NULL;
  }
    Node* temp = root;
   while (root->left != NULL)
   {
       temp = temp->left;
   }

   return temp;
   
}

Node* maxValue(Node* root){
  if(root == NULL){
     return NULL;
  }
   Node* temp = root;
    while (temp->right != NULL)
    {
      temp = temp->right;
    }
    
   return temp;

}



int main(){
          
    Node* root = NULL;
    createBst(root);
    levelOrderTraversal(root);


    return 0;
}