#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int start, int mid, int end){
    int i = start;
    int j = mid + 1;
    vector<int> temp;

    while(i <= mid && j <= end){
        if(arr[i] < arr[j]){
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Remaining elements of left part
    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }

    // Remaining elements of right part
    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }

    // Copy temp array back to original array
    for(int k = 0; k < temp.size(); k++){
        arr[start + k] = temp[k];
    }
}

void mergsort(int arr[], int start, int end){
    // base case
    if(start >= end) return;

    int mid = start + (end - start) / 2;

    // recursive calls
    mergsort(arr, start, mid);
    mergsort(arr, mid + 1, end);

    // merge the sorted parts
    merge(arr, start, mid, end);
}

int main(){
    int arr[] = {2, 1, 6, 9, 4, 5};
    int size = 6;

    mergsort(arr, 0, size - 1);

    // print sorted array
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
