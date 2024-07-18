#include<iostream>
using namespace std;

class Queue{
   public:
    int *array;
    int size;
    int front;
    int rear;

    //constructor is created 

    Queue(int size){
        array = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }
void enqueue(int data){
        if(rear == size-1){
            cout << "queue is overflowing" << endl;
            return;
        } else if (front == -1 && rear == -1)
        {  
             front++;
             rear++;
             array[rear] = data;

            
        } else{
            rear++;
            array[rear] = data;
        }
    }

void dequeue(){
    if (front == -1 && rear == -1)
    {
        cout << "Underflow" << endl;
        return;

    } else if (front == rear)
    {
        //empty case ->single element
        array[front] = -1;
        front = rear = -1;
    } else{
     array[front] = -1;
     front++;
    }
    
}

int isempty(){
    if (front == -1 && rear == -1)
    {
        return true;
    } else{
        return false;
    }
    
}

int getsize(){
    if (front == -1 && rear == -1)
    {
        return 0;
    } else{
        return rear -front+1;
    }
    
   
}

int getfront(){
    if (front == -1)
    {
        cout << "cannot get the front element becacuse is empty";
        return -1;
    } else{
        return array[front];
    }
    
}

int getrear(){
    if(rear == -1){
        return 0;
    } else{
        return array[rear];
    }
}
void pirntall(){
    if(front == -1 && rear == -1){
       cout<< "queue is empty" << endl;
       int i;
    } else{
        for (int i = front; i < rear+1; i++)
        {
            cout << array[i] <<  " ";
        }
        cout << endl;
    }
}
    
};

int main (){

// creation of queue
Queue q(5);
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
q.enqueue(40);
q.enqueue(50);

q.pirntall();

q.dequeue();
q.pirntall();
cout << q.getfront() << endl;
cout << q.getsize() << endl;
cout << q.getrear() << endl;

q.dequeue();
q.dequeue();
q.dequeue();
q.dequeue();
q.pirntall();
cout << q.getfront() << endl;
cout << q.getsize() << endl;



}