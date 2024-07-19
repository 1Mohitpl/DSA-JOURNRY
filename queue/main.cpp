#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reversequeue(queue<int> &q){
    stack<int> st;

    // one by one put element into the stack from queue

    while (!q.empty())
    {
       int frontelement = q.front();
       q.pop();
       st.push(frontelement);
    }
    // one by one put element from stack and push into the queue
    while (!st.empty())
    {
        int element = st.top();
        st.pop();
        q.push(element);
    }
    
}

void reverseFirstK(queue<int> &q, int k){
    stack<int>s;
    int n = q.size();

    if (k>n || k==0)
    {
        return;
    }
    
    for (int i = 0; i <k; i++)
    {
         int temp = q.front();
         q.pop();

        s.push(temp);
    }
    
    while (!s.empty())
    {
        int temp = s.top();
        s.pop();

        q.push(temp);
    }
    // push (n-k) element form start and push again into the queue

    for (int i = 0; i < (n-k); i++)
    {
        int temp = q.front();
        q.pop();
        q.push(temp);
    }
    
}


int main () {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60); 
    q.push(70);
    

    // reversequeue(q);
    
  reverseFirstK(q, 4);

    while(!q.empty()){
        int ans = q.front();
        q.pop();
        cout << ans << " ";
    }

    return 0;


}





























































// #include<iostream>
// using namespace std;

// class Queue{
//    public:
//     int *array;
//     int size;
//     int front;
//     int rear;

//     //constructor is created 

//     Queue(int size){
//         array = new int[size];
//         this->size = size;
//         front = -1;
//         rear = -1;
//     }
// void enqueue(int data){
//         if(rear == size-1){
//             cout << "queue is overflowing" << endl;
//             return;
//         } else if (front == -1 && rear == -1)
//         {  
//              front++;
//              rear++;
//              array[rear] = data;

            
//         } else{
//             rear++;
//             array[rear] = data;
//         }
//     }

// void dequeue(){
//     if (front == -1 && rear == -1)
//     {
//         cout << "Underflow" << endl;
//         return;

//     } else if (front == rear)
//     {
//         //empty case ->single element
//         array[front] = -1;
//         front = rear = -1;
//     } else{
//      array[front] = -1;
//      front++;
//     }
    
// }

// int isempty(){
//     if (front == -1 && rear == -1)
//     {
//         return true;
//     } else{
//         return false;
//     }
    
// }

// int getsize(){
//     if (front == -1 && rear == -1)
//     {
//         return 0;
//     } else{
//         return rear -front+1;
//     }
    
   
// }

// int getfront(){
//     if (front == -1)
//     {
//         cout << "cannot get the front element becacuse is empty";
//         return -1;
//     } else{
//         return array[front];
//     }
    
// }

// int getrear(){
//     if(rear == -1){
//         return 0;
//     } else{
//         return array[rear];
//     }
// }
// void print() {
//   cout << "front :" << front << "rear:" <<rear <<endl;
//   cout << "printing queue : " <<endl;
//   for (int i = 0; i < size; i++)
//   {
//      cout << array[i] << " ";
//   }
//   cout <<endl;
  
 
    
// }
    
// };

// int main (){

// // creation of queue
// Queue q(5);
// q.enqueue(10);

// q.enqueue(20);
// q.pirntall();
// q.enqueue(30);
// q.enqueue(40);
// q.enqueue(50);



// q.dequeue();
// q.pirntall();
// cout << q.getfront() << endl;
// cout << q.getsize() << endl;
// cout << q.getrear() << endl;

// q.dequeue();
// q.dequeue();
// q.dequeue();
// q.dequeue();
// q.pirntall();
// cout << q.getfront() << endl;
// cout << q.getsize() << endl;



// }