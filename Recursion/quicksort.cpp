#include <iostream>
#include <vector> // Include the vector header

using namespace std;

void quickSort(vector<int>& arr, int start, int end) {
    if (start >= end) {
        return;
    }
    int pivot = arr[end];
    int i = start - 1;
    int j= start;
    for (int j = start; j < end; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[end]);
    int pivotIndex = i + 1;

    quickSort(arr, start, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, end);
}

int main() {
    vector<int> arr = {7, 2, 1, 8, 6, 3, 5, 4}; // Use std::vector
    int size = arr.size(); // Using std::vector's size method
    int start = 0;
    int end = size - 1;

    quickSort(arr, start, end);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


 void quickSort(int arr[], int low, int high)
    {
          if(low>= high){    // base case;
               return;
          }
          
          int pivot = high;
          int s = low;
          int e = low-1;
          
          while(s<pivot){
              if(arr[s]<arr[pivot]){
                  e++;
             
                  swap(arr[e],arr[s]);
                  
              }
              s++;
              
          }
          e++;
        swap(arr[e], arr[pivot]);
        quickSort(arr, low, e-1);
        quickSort(arr, e+1, high );
         
          
          
          
    }
    