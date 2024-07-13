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

}