#include<iostream>
#include<vector>
using namespace std;
 
class Node{
    public:
    Node* left;
    Node* right;
    int data;

    Node(int val){
      this->data = val;
      this->left = NULL;
      this->right = NULL;
    }

  
}

 Node* inorderTraversal(vector<int>ans, Node* root){
        Node* curr = root;
        while(curr){
            // left is null
            if(curr->left == NULL){
                ans.push_back(curr->data);
                curr = curr->left;
            }
            // left is not null, find predecesor
            Node* pred = curr->left;
            while(pred->right!= NULL){
                pred = pred->right;
            }
            // if pred right is null, establish connection and move curr to its left
            if(pred->right == NULL){
                pred-right = curr;
                curr = curr->left;
            } else{
                pred->right = NULL;
                ans.push_back(curr->data);
                curr = curr->right;
            }
        }
        return ans;
    }
int main () {
   vector<int>ans;
   int data;
   Node* root = new Node(data);
  
   inorderTraversal(root,ans);     
}