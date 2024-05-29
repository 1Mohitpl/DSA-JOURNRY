#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int target) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = (start + end) / 2;
        
        // Check if the target is present at mid
        if (arr[mid] == target) {
            return mid; // Return the index of the found element
        }
        
        // If target is greater, ignore the left half
        else if (arr[mid] < target) {
            start = mid + 1;
        }
        
        // If target is smaller, ignore the right half
        else {
            end = mid - 1;
        }
    }
    
    // Target was not found
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int target = 90;
    int n = sizeof(arr) / sizeof(arr[0]);

    int targetResult = binarysearch(arr, n, target);
    if (targetResult == -1) {
        cout << "Element is not found" << endl;
    } else {
        cout << "Target element found at index " << targetResult << endl;
    }
}
