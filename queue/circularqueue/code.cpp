#include <iostream>
using namespace std;

class Cqueue {
public:
    int *arr;
    int size;
    int front;
    int rear;

    Cqueue(int size) {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    ~Cqueue() {
        delete[] arr;
    }

    void push(int val) {
        if ((rear + 1) % size == front) {
            cout << "queue is full" << endl;
        } else if (front == -1 && rear == -1) {
            front = rear = 0;
            arr[rear] = val;
        } else {
            rear = (rear + 1) % size;
            arr[rear] = val;
        }
    }

    void pop() {
        if (front == -1 && rear == -1) {
            cout << "underflow" << endl;
            return ;
        } else if (rear == front) {
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
    }

void print() {
    int i = front;
    if (front == -1 && rear == -1)
    {
         cout << "queue is empty" <<endl;
    } else{
        while(i!= rear){
            cout << arr[i] << " ";
            i = (i+1)% size;
        }
    
        cout << arr[rear] << endl;
    }
    
    
}
};

int main() {
    Cqueue cq(5);
    cq.push(10);
    cq.push(20);
    cq.push(30);
    cq.push(40);
    cq.push(50);
    cq.print();

    cq.pop();
    cq.print();
    cq.push(11);
    cq.print();


    return 0;
}
