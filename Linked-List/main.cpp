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

 int print (Node* head){
   Node* temp = head;         // create anoter temporary pointer 
  int count = 0;
   while (temp!= NULL)
   {
         count ++;
       cout << temp->data << " ";     // print  the data 
       temp = temp->next;              // pointing to the next pointer
   }
     cout << "total number of nodes :"<< count << endl;
  cout << endl;
}


void insterAHead(Node* &head, int data){
   Node* temp = new Node(data);   // create another node 
   temp->next = head;
   head = temp;

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
//   print(head);

  insterAHead(head, 200);
  print(head);
 
  
}