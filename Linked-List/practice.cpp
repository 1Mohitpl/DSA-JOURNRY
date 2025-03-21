#include<iostream>
using namespace std;

// creating class 

class Node {
    public :
    int data;
    Node* next;
   
// defalut constarutor 

Node () {
  cout << "default ctor" << endl;
    this->next = NULL;
  }
 
  // parametersise constrator 
 
  Node(int data) {
    cout << "parameterise ctor" << endl;
     this->data = data;
     this->next = NULL;
     
  }





};

int  length (Node* head) {
    Node* temp = head;
    int countlen = 0;
    while(temp!= NULL) {
        countlen ++;
        temp = temp->next;
    }
    return countlen;
}

void printLL(Node* head) {
    Node* temp = head;
    while(temp!= NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
 
void insertHead (Node* &head, Node* &tail, int data) {

     // empty linklist
    if(head == NULL) {
       // step1:
       // create a new node;
        Node* newnode = new Node(data);
        //update the head pointer
        head = tail =  newnode; 
      
    }  else {
           // create a new node;
    Node* temp = new Node(data);
    temp->next = head;
    //update the head pointer
    head = temp;

    }
     
}

int main() {
    Node * first = new Node(100);
    Node* second  = new Node(200);
    Node* third = new Node(300);
    Node* foruth = new Node(400);
    Node* fifth = new Node(500);

    first->next = second;
    second->next = third;
    third->next = foruth;
    foruth->next = fifth;
    fifth->next = NULL;
    // head create 
    Node* head = first;
    Node* tail = NULL;
    printLL(head);
   int ans  =  length(head);
   cout << ans << endl;

   insertHead(head, tail,30);
   printLL(head);
}