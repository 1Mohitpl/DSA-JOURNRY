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

int main (){
    //creation of node
    //  Node a;    // static allocation 
    Node* head1 = new Node(10);    // dynamically creation of an node
    Node* head2 = new Node(20);  
    Node* head3 = new Node(30);  
    Node* head4 = new Node(40);  
    Node* head5 = new Node(50);  
    Node* head6 = new Node(60);  
    Node* head7 = new Node(70);  
    Node* head8 = new Node(80);  

    head1->pointer = head2;
    head2->pointer = head3;
    head3->pointer = head4;
    head4->pointer = head5;
    head5->pointer = head6;
    head6->pointer = head7;
    head7->pointer = head8;
    head8->pointer = NULL;       // creation of linked  list 

    Node* head  = head1;
    printall(head);

}