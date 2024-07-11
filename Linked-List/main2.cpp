#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* pointer;                // create node
    

    Node(){
        cout << "default construatore is called" <<endl;
        this->pointer = NULL;
    }

    Node(int val){
        // cout << "parametarised constractor is called" << endl;
        this->val = val;
        this->pointer = NULL;
    }
};

 void  printall (Node* head){
        Node* temp = head; // create an temporray pointer 

        while (temp != NULL)
        {
             cout << temp->val  << " ";
             temp = temp ->pointer;
        }
      cout << endl;  


    }

    int getlenght(Node* head) {
        Node* temp = head;
        int count = 0;
        while (temp != NULL)
        {
             count ++;
             temp = temp ->pointer;
        }

        return count;
        
    }

    void insertAthead(Node* &head, Node* &tail, int val){
        if(head == NULL){
            // ceate an new node
            Node* newnode = new Node(val);
            //  updating head 

            head = newnode;
            tail = newnode;
        } else{
            Node* temp = new Node(val);
        temp->pointer = head;
        head = temp;

        }

        
    }

    void insertedAttail(Node* &head, Node* &tail, int val){
        if(head == NULL){
            // create an node
            Node* newnode = new Node(val);
            head= newnode;
            tail = newnode;
        } else{
            Node* newnode = new Node(val);
            tail->pointer = newnode;
            tail = newnode;
        }
    }

    void createTail(Node* &head, Node* &tail, int val){
        // create an temp pointer

        Node* temp = head;
        while(temp ->pointer != NULL){
            temp =  temp->pointer;
        }

        tail = temp;
    }

int main (){
    //creation of node
    //  Node a;    // static allocation 
    // Node* head1 = new Node(10);    // dynamically creation of an node
    // Node* head2 = new Node(20);  
    // Node* head3 = new Node(30);  
    // Node* head4 = new Node(40);  
    // Node* head5 = new Node(50);  
    // Node* head6 = new Node(60);  
    // Node* head7 = new Node(70);  
    // Node* head8 = new Node(80);  

    // head1->pointer = head2;
    // head2->pointer = head3;
    // head3->pointer = head4;
    // head4->pointer = head5;
    // head5->pointer = head6;
    // head6->pointer = head7;
    // head7->pointer = head8;
    // head8->pointer = NULL;       // creation of linked  list 

    Node* head  = NULL;
    Node* tail = NULL;
  


    insertAthead(head, tail, 10);
    insertAthead(head,tail, 20);
    insertAthead(head,tail, 30);
    insertAthead(head,tail, 40);
    insertAthead(head,tail,50);
    insertAthead(head,tail, 60);

   insertedAttail(head, tail, 400);
     printall(head);
        cout << "lenght" << getlenght(head);
}