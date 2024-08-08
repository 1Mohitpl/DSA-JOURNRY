#include<iostream>
#include<queue>
#include<map>
using namespace std;

class Node{
    public:
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
        return;
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
void printTopview(Node* root) {
    map<int, int> hdToNodemap;
    queue<pair<Node*, int>> q;  // create a queue that stores pairs
    q.push(make_pair(root, 0)); // initial stage of root Node

    while (!q.empty()) {
        pair<Node*, int> temp = q.front();
        q.pop();

        Node* frontnode = temp.first;
        int hd = temp.second;

        // if there is no entry for hd in map, then create a new entry
        if (hdToNodemap.find(hd) == hdToNodemap.end()) {
            hdToNodemap[hd] = frontnode->data;
        }

        // child 
        if (frontnode->left != NULL) {
            q.push(make_pair(frontnode->left, hd - 1));
        }

        if (frontnode->right != NULL) {
            q.push(make_pair(frontnode->right, hd + 1));
        }
    }

    cout << "Printing top view: " << endl;
    for (auto i : hdToNodemap) {
        cout << i.second << " ";
    }
    cout << endl;
}

void printBottomView(Node* root) {
    map<int, int> hdToNodemap;
    queue<pair<Node*, int>> q;  // Create a queue that stores value with pairs
    q.push(make_pair(root, 0)); // Initial stage of root Node

    while (!q.empty()) {
        pair<Node*, int> temp = q.front();
        q.pop();

        Node* frontnode = temp.first;
        int hd = temp.second;

        // Value overwrite
        hdToNodemap[hd] = frontnode->data;

        // Child
        if (frontnode->left != NULL) {
            q.push(make_pair(frontnode->left, hd - 1));
        }

        if (frontnode->right != NULL) {
            q.push(make_pair(frontnode->right, hd + 1));
        }
    }

    cout << "Printing bottom view: " << endl;
    for (auto i : hdToNodemap) {
        cout << i.second << " ";
    }

    cout << endl;
}


void leftboundary(Node* root){
     if(root == NULL){
        return;
     }

     if(root->left == NULL && root->right == NULL){
        return;
     }
       cout << root->data << " ";
     if(root->left != NULL){
        leftboundary(root->left);
     } else{
        leftboundary(root->right);
     }
}
    
    void printleafNode(Node* root){
        if(root == NULL){
            return;
        }
         // printleaf nodes
        if(root->left == NULL && root->right == NULL){
            cout << root->data << " ";
        }
        printleafNode(root->left);
        printleafNode(root->right);

    }


void rightboundary(Node* root){
     if(root == NULL){
        return ;
     }

     if(root->left == NULL && root->right == NULL){
        return;
     }
      
     if(root->right != NULL){
        rightboundary(root->right);
     } else{
         rightboundary(root->left);
     }

      cout << root->data << " ";
}


void boundaryTraversal(Node* root){
    if(root == NULL){
        return;
    }
  cout << root->data << " ";
    leftboundary(root->left);
    printleafNode(root->left);
    printleafNode(root->right);
    rightboundary(root->right);
    

   

}


int main (){
    Node* root = createTree();
//     levelorderTreversal(root);
//       printTopview(root);
//    printBottomView(root);
      boundaryTraversal(root);

    return 0;
   
   
}