#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* pointer;

    Node() {
        cout << "Default constructor is called" << endl;
        this->pointer = NULL;
    }

    Node(int val) {
        this->val = val;
        this->pointer = NULL;
    }

    ~Node() {
        cout << "Destructor is called for node with value " << this->val << endl;
    }
};

void printAll(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->pointer;
    }
    cout << endl;
}

int getLength(Node* head) {
    Node* temp = head;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->pointer;
    }
    return count;
}

void insertAtHead(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = tail = newNode;
    } else {
        newNode->pointer = head;
        head = newNode;
    }
}

void insertAtTail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = tail = newNode;
    } else {
        tail->pointer = newNode;
        tail = newNode;
    }
}

void createTail(Node*& head, Node*& tail, int val) {
    Node* temp = head;
    while (temp->pointer != NULL) {
        temp = temp->pointer;
    }
    tail = temp;
}

void deleteNode(Node*& head, Node*& tail, int position) {
    if (head == NULL) {
        cout << "Cannot delete, list is empty" << endl;
        return;
    }

    if(head== tail){
        // single element
        Node* temp = head;
        delete temp;    
        head =  NULL;
        tail = NULL;
        return;
    }

    int len = getLength(head);

    if (position == 1) {
        Node* temp = head;
        head = head->pointer;
        delete temp;
    } else if (position == len) {
        Node* prev = head;
        while (prev->pointer != tail) {
            prev = prev->pointer;
        } 
        delete tail;
        tail = prev;
        tail->pointer = NULL;
    } else {
        Node* prev = NULL;
        Node* curr = head;
        for (int i = 1; i < position; i++) {
            prev = curr;
            curr = curr->pointer;
        }
        prev->pointer = curr->pointer;
        delete curr;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 60);

    insertAtTail(head, tail, 400);

    printAll(head);
    cout << "Length: " << getLength(head) << endl;

    deleteNode(head, tail, 1);
    printAll(head);
    cout << "Length: " << getLength(head) << endl;

    return 0;
}
