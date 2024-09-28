#include<iostream>
#include<vector>
using namespace std;
clsas 

void storeinorderTraversal(Node* root, vector<int> &in){
     if(root == NULL){
        return;
     }

     storeinorderTraversal(root->left, in);
     in.push_back(root->data);
     storeinorderTraversal(root->right, in);
}
  void  replaceUsingPostorder(Node* root, vector<int>&in, int &index){
      if(root == NULL){
        return;
      }
    replaceUsingPostorder(root->left, in);
    replaceUsingPostorder(root->right, in);
    root->data = in[index];
      
  }

Node*  convertBSTintomaxheap(Node* root){
    // store the inorder
    vector<int>inorder;
    storeinorderTraversal(root, inorder);
    // replace the node values with sorted inorder values, using postorder traversal
      int index = 0;
      replaceUsingPostorder(root, in, index);
    return root;
}


int main(){

}