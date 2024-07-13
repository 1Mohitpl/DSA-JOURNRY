#include<iostream>
using namespace std;

class Node{
    public:
    int data ;
    Node* prev;
    Node* next;

    Node(){
       this->prev = NULL;
       this->next = NULL;
    }

    Node(int data){
        this->prev = NULL;
        this->next = NULL;
        this->data = data; 
    }
};

void printall (Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "-> ";
        temp = temp->next;

    }
    cout << endl;
}

int getLength(Node* &head){
    int count = 0;
    Node* temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}


void insertAthead (Node* &head, Node* &tail, int data){
    // ll is empty

    if(head == NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
         
    } else{
        //  non -empty 
     Node* newnode =  new Node(data);
     head->prev = newnode;
     newnode->next = head;
     head = newnode;

    }
}

 void insertAttail(Node* &head, Node* &tail, int data){

    if (head == NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
    } else
    {
         Node* newnode = new Node(data);
         tail->next = newnode;
         newnode->prev = tail;
         tail = newnode;
    }
    
 
 }

 void insertAtPosition(Node* &head, Node* &tail, int data, int pos){
    if(head == NULL){
        Node* newnode = head;
        head = newnode;
        tail = newnode;
    } else{
        // non empty
        int len = getLength(head);
        if (pos == 1)
        {
           insertAthead(head, tail, data);
        } else if (pos == len+1){
             insertAttail(head, tail, data);
        } else{
            // middle insert
            //step1: create an node
            Node* newnode = new Node(data);
            // set two pinters 
            Node* prevnode = NULL;
            Node* currnode = head;
            while(pos != 1){
                pos--;
                prevnode  = currnode;
                currnode = currnode->next;
            }
            // update the pointers 
            prevnode->next = newnode;
            newnode->prev = prevnode;
            newnode->next = currnode;
            currnode->prev = newnode;
        }
        
        
    }
 }
int main () {

    Node* head = NULL;
    Node* tail = NULL;
    insertAthead(head, tail, 70);
    insertAthead(head, tail, 60);
    insertAthead(head, tail, 50);
    insertAthead(head, tail, 40);
    insertAthead(head, tail, 30);
    insertAthead(head, tail, 20);
    insertAthead(head, tail, 10);
    printall(head);

    // insertAttail(head, tail, 200);
    insertAtPosition(head, tail, 300, 4);
    printall(head);

}