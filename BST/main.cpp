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

bool searchInBST(Node* root, int target){
     if(root == NULL){
      return false;
     }

     bool leftans = false;
     bool rightans = false;

     if(root->data == target){
      return true;
     } else{
          if(target > root->data){
              rightans = searchInBST(root->right, target);
          } else{
              leftans = searchInBST(root->left, target);
          }
          
     }
    return leftans || rightans;
}

Node* deletefromBST(Node* root, int target){
      // findout target and delete it 
      if(root == NULL)  {
        return NULL;
      }
    // finding the target 
    if(root->data == target){
       //now delete the data
       //DELETE LEAF NODES

       if(root->left == NULL && root->right == NULL){
              delete root;
              return NULL;
        }

        if(root->left != NULL && root->right == NULL){
               Node* chaildSubtree = root->left;
               delete root;
               return chaildSubtree;
        }

        if(root->left == NULL && root->right != NULL){
           Node* chaildSubtree = root->right;
           delete root;
           return chaildSubtree;
        }

        // last case 
        if(root->left != NULL && root->right != NULL){
            // get the max value of left subtree
              Node* maxval =  maxValue(root->left);
              root->data = maxval->data;

              // delete actual maxval node, 
              root->left=deletefromBST(root->left, maxval->data); 
              return root;
              
        }

      

}   

    else if (target>root->data)
    {
        root->left=  deletefromBST(root->left , target);
    } else{
         root->right=  deletefromBST(root->right, target);
    }
     return root;
}


int main(){
          
    Node* root = NULL;
    createBst(root);
    levelOrderTraversal(root);

    int target;
    cout << endl << "Emter an target Value : "<< endl;
    cin >> target;

    while(target != -1){
      root = deletefromBST(root, target);
      cout << endl << " printing levelOrder tarversal : " << endl;
      levelOrderTraversal(root);

      cout << endl << "Emter an target Value : "<< endl;
    cin >> target;  

    }


    return 0;
}