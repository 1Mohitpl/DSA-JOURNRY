#include<iostream>
using namespace std;

class Node {
    int data;
    Node* prev;
    Node* next;


    Node() {
        this->prev = NULL;
        this->next =NULL;
    }


    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

};


 void print(Node* head) {
    Node* temp  = head;
    while(temp != NULL){
        
        cout << temp->data << endl;
        temp = temp->next;
    }
 }

 int findLen(Node* &head) {

    Node* temp = head;
    int length = 0;
    while(temp != NULL) {
        length++;
        temp = temp->next;
    }
    return length;
 }

 void insertAtHead(Node* &head, Node* &tail, int data) {
       // check if LL is empty or not
       if(head == NULL) {
         cout << "LL is empty" << endl;
       } else {
        Node* temp = new Node(data);
        temp->next = head;
        head->prev = temp;
         head = temp;
    }
}



int main () {
     
}























// #include<iostream>
// using namespace std;

// // creating class 

// class Node {
//     public :
//     int data;
//     Node* next;

   
// // defalut constarutor 

// Node () {
//   cout << "default ctor" << endl;
//     this->next = NULL;
//   }
 
//   // parametersise constrator 
 
//   Node(int data) {
//     cout << "parameterise ctor" << endl;
//      this->data = data;
//      this->next = NULL;
     
//   }

//      ~Node() {
//         cout << "destractor is called :" << this->data << endl;
//      }




// };

// int  length (Node* head) {
//     Node* temp = head;
//     int countlen = 0;
//     while(temp!= NULL) {
//         countlen ++;
//         temp = temp->next;
//     }
//     return countlen;
// }

// void printLL(Node* head) {
//     Node* temp = head;
//     while(temp!= NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
 
// void insertHead (Node* &head, Node* &tail, int data) {

//      // empty linklist
//     if(head == NULL) {
//        // step1:
//        // create a new node;
//         Node* newnode = new Node(data);
//         //update the head pointer
//         head = tail =  newnode; 
      
//     }  else {
//            // create a new node;
//     Node* temp = new Node(data);
//     temp->next = head;
//     //update the head pointer
//     head = temp;

//     }
     
// }

// void insertTail(Node* &head, Node* &tail, int data){
     
//      if(head == NULL){
//         Node* newnode = new Node(data);
//         head = newnode;
//         tail = newnode;
//      } else {
//         // create a new node
//         Node* temp = new Node(data);
//         temp->next = head;
//         head = temp;
//      }
// }


// void deletNode (Node* &head, Node* &tail, int data){

//     // emty ll is
//     if(head == NULL) {
//         cout << "linklist is empty" << endl;
//     }


//     if(position == 1) {
//         // delet the head node

//         Node* temp = head;
//         head = head->next;
//         temp->next = NULL;
//         delete temp;
//     }


//     if(position  == length){
//         // tail delete
//         Node* prev = NULL;
//         while(prev->next != NULL) {
//             prev = prev->next;
//         }

//         prev->next = NULL;
//         delete tail;
//         tail = prev;
//     }

//     else {
         
//         Node* prev = NULL;
//         Node* curr = head;

//         while(position != 1) {
//             position--;
//             prev->next =  head;
//             prev = curr;
//         }

//         prev->next = curr->next;
//         curr->next = NULL;
//         delete curr;
//     }
// }



// int main() {
//     Node * first = new Node(100);
//     Node* second  = new Node(200);
//     Node* third = new Node(300);
//     Node* foruth = new Node(400);
//     Node* fifth = new Node(500);

//     first->next = second;
//     second->next = third;
//     third->next = foruth;
//     foruth->next = fifth;
//     fifth->next = NULL;
//     // head create 
//     Node* head = first;
//     Node* tail = NULL;
//     printLL(head);
//    int ans  =  length(head);
//    cout << ans << endl;

//    insertHead(head, tail,30);
//    printLL(head);
// }