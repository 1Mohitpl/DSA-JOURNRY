#include<iostream>
using namespace std;

class Node{
    public:
     int data;
     Node* next;    // next is a pointer that point to the node


     Node(){
        cout << "default ctor is called" << endl;
        this->next=NULL;
     }

     Node(int data){
        cout << "parameterose ctor is called" << endl;
        this->data = data;
        this->next= NULL; 
     }

};

int main () {
   Node*next;

   Node* first = new Node(10);
   Node* second = new Node(20);

}