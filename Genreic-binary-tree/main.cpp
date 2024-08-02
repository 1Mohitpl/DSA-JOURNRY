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



int main () {

  Node* root  = createTree();
  cout << "root-Node : " << root->data << endl;

}