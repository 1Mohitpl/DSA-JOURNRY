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