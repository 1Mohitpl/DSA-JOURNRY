class MyCircularQueue {
    int *arr, size, front, rear;
public:
    MyCircularQueue(int k) {
        this->size = k;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    
    bool enQueue(int value) {
        if (isFull()) {
            cout << "queue is full" << endl;
            return false;
        } else if (isEmpty()) {
            front = rear = 0;
            arr[rear] = value;
        } else {
            rear = (rear + 1) % size;
            arr[rear] = value;
        }
        return true;
    }
    
    bool deQueue() {
        if (front == -1 && rear == -1) {
            cout << "underflow" << endl;
            return false;
        } else if (rear == front) {
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
        return true;
    }
    
    int Front() {
        if(front == -1 ){
            return -1;
        }
        return arr[front];
    }
    
    int Rear() {
        if(rear == -1){
            return -1;
        } 
        return arr[rear];
    }
    
     bool isEmpty() {
        return front == -1;
    }
    
   bool isFull() {
        return (rear + 1) % size == front;
    }
};