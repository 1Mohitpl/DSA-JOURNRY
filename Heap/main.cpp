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

        // Take the value to its correct position
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

    int deletNode(){
        int element = arr[1];  // store the root of the tree;

        // replacepent;
        swap(arr[1], arr[size]);
        
        // delete the position of last element
        size--;
        int index =1;
        while (index<size)
        {
            int leftchild = 2*index;
            int rightchild = 2*index+1;

            // findout largest element
            int largestIndex = index;

            // check the left child
            if(leftchild <= size && arr[largestIndex] < arr[leftchild]){
                largestIndex = leftchild;
            }
            if(rightchild <=size && arr[largestIndex] < arr[rightchild]){
                largestIndex = rightchild;
            }

            // if no change
            if(index == largestIndex){
                break;
            } else{
                swap(arr[index], arr[largestIndex]);
                index = largestIndex;
            }
        }
        return element;
    }
};

void heapify(int *arr, int n, int index){
    int leftIndex = 2*index;
    int rightIndex = 2*index+1;
    int largestIndex = index;
    
    // compare its value to his right or left index

    if(leftIndex  <=n && arr[leftIndex] > arr[largestIndex]){
          largestIndex = leftIndex;
    }
    if( rightIndex <=n && arr[rightIndex] > arr[largestIndex]){
        largestIndex = rightIndex;
    }

    // now largestIndex will be largest element among 3
    if(index != largestIndex){
        swap(arr[index], arr[largestIndex]);
        index = largestIndex;
        heapify(arr, n, index);
    }

}

  void buildHeap(int arr[], int n){
    for(int index = n/2; index>0; index--){
        heapify(arr, n, index);
    }
  }

  void heapsort(int arr[], int n){
     while( n>1){
      swap(arr[1], arr[n]);
      // delete size
      n--;
      heapify(arr, n, 1);
     }
  }
int main() {
    int arr[] = {-1, 5,10, 15, 20, 25, 12};

    int n = 6;
    buildHeap(arr, n);
   
   cout << "printing the heap : " << endl;
    for(int i = 1; i<=n;i++){
        cout <<arr[i] << " "; 
    }
    cout << endl;
    
    heapsort(arr, n);
  cout << "sorting the heap : " << endl;
    for(int i = 1; i<=n;i++){
        cout <<arr[i] << " "; 
    }
    cout << endl;
    
    
    
    
    
    // Heap h(20);
//     h.insert(10);
//     h.insert(20);
//     h.insert(5);
//     h.insert(11);
//     h.insert(6);
//     h.insert(16);

//     h.printHeap();  // Print heap elements
//   int ans =  h.deletNode();
//   cout << "delete node :" << ans << endl;
//   h.printHeap();
//   buildHeap();

//   h.printHeap();


    return 0;
}
