#include<iostream>
using namespace std;

class Heap {
public:
    int *arr;
    int size;
    int capacity;

    // Constructor
    Heap(int capacity) {
        this->size = 0;
        this->arr = new int[capacity + 1]; // Array index starts from 1 for simplicity.
        this->capacity = capacity;
    }

    void insert(int val) {
        if (size == capacity) {
            cout << "Heap is overflow" << endl;
            return;
        }

        size++;
        int index = size;
        arr[index] = val;

        // Take the value to its right position
        while (index > 1) {
            int parentIndex = index / 2;
            // If current index is greater than parent index
            if (arr[index] > arr[parentIndex]) {
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            } else {
                break;
            }
        }
    }

    void printHeap() {
        for (int i = 1; i <= size; i++) {
            cout << "Heap element: " << arr[i] <<endl;;
        }
        
    }
};

int main() {
    Heap h(20);
    h.insert(10);
    h.insert(20);
    h.insert(5);
    h.insert(11);
    h.insert(6);
    h.insert(16);

    h.printHeap();  // Print heap elements
    
    return 0;
}
