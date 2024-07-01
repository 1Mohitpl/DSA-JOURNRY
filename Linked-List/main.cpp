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

 void print (Node* head){
   Node* temp = head;         // create anoter temporary pointer 

   while (temp!= NULL)
   {
       cout << temp->data << endl;     // print  the data 
       temp = temp->next;              // pointing to the next pointer
   }
   
           
}


int main () {
   Node*next; 

   Node* first = new Node(10);
   Node* second = new Node(20);
      Node* third = new Node(30);
         Node* fourth = new Node(40);
            Node* fifth = new Node(50);
              
               

   first->next = second;
   second->next= third;
   third->next= fourth;
   fourth->next= fifth;
  
  Node* head = first;
  print(head);
}