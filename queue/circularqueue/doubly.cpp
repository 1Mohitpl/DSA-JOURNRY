#include<iostream>
using namespace std;

class dequeue{
   public:
   int *arr;
   int size;
   int front;
   int rear;


   dequeue(int size){
    arr = new int[size];
    front = -1;
    rear =-1;
   }

   void pushback(int val){
       // check overflow condition;
       if(front == 0 && rear = size-1 || (rear == front-1)){
        cout << "overlflow" << endl;
       } else if(front == -1 && rear == -1){
        front= rear = 0;
        arr[rear] = val;
       } else if(rear = size-1 && front!= 0){
        rear = 0;
        arr[rear] = val;
       } else{
        rear++;
        arr[rear] = val;
       }
   }
void pushfront(int val){
     if(front == 0 && rear = size-1 || (rear == front-1)){
        cout << "overlflow" << endl;
       } else if(front == -1 && rear == -1){
        front = rear = -1;
        arr[front] = val;
    }  else if(front == 0 && rear != size-1){
        front = size-1;
        arr[front] = val;
    } 
     else{
        front--;
        arr[front] = val;

    }
    
}

void popfront () {

    if(front == -1 && rear == -1){
        cout << "underflow" << endl;
    } else if(rear == front){
        arr[front] = -1;
        front = -1;
        rear = -1;
    }  else if(front == size-1) {
        arr[front] = -1;
        front = 0;

    }
    
    
    else {
        arr[front] = -1;
        front++;
         
    }
}

void popback() {
    // underflow
    if(front == -1 && rear == -1){
        cout << "underflow" << endl;
    } else if(rear == front){
        arr[rear] = -1;
        front = -1;
        rear = -1;
    }  else if(rear ==0){
        arr[rear] = -1;
        rear= size-1;
    }
    
    
    else{
        arr[rear] = -1;
        rear--;
    }
}






};


int main () {



}