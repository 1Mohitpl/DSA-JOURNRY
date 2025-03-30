#include<iostream>
using namespace std;

class Node {
    public:
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
    ~Node() {
        
    }
};


 void print(Node* head) {
    Node* temp  = head;
    while(temp != NULL){
        
        cout << temp->data << "->";
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
          // that means head & tail pointing to the same Node
          Node* newnode = new Node(data);
          head = newnode;
          tail = newnode;

       } else {
        Node* temp = new Node(data);
        temp->next = head;
        head->prev = temp;
         head = temp;
    }
}


void insertatTail(Node* &head, Node* &tail, int data){
    // check if LL is empty
    if(head == NULL) {
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
    } else {

        Node* temp = new Node(data);
        temp->prev = tail;
        tail->next = temp;
        tail = temp; 
    }
}


void insertATposition(Node* &head, Node* &tail, int data, int position){

    if(head == NULL) {
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
    } else {

        Node* prev = NULL;
        Node* curr = head;
        Node* newnode = new Node(data);
        while(position != 1) {
            position--;
            prev = curr;
            curr = curr->next;

        }
        prev->next = newnode;
        newnode->prev = prev;
        newnode->next = curr;
        curr->prev = newnode;

    }
}


void deleteAtHead(Node* &head, Node* &tail, int data, int posi) {
      if(head == NULL) {
         cout << "empty LL" << endl;
      } 

    int len = findLen(head);
      if(len == 1) {
         // one element 
         delete head;
      }
      
      if(posi == len) {
        // delete from tail 

        Node* newnode = tail->prev;
        newnode->next = NULL;
        tail->prev = NULL;
        delete tail;
        tail =  newnode;
      }
      
      
      else {

        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
      }
}



int main () {
     Node* head = NULL;
     Node* tail = NULL;
     insertAtHead(head, tail, 10);
     insertAtHead(head, tail, 20);
     insertAtHead(head, tail, 30);
     insertAtHead(head, tail, 40);
     insertAtHead(head, tail, 50);

     insertATposition(head, tail, 500, 2);
     print(head);
     

    //  print(head);

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