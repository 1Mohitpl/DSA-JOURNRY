#include<iostream>
using namespace std;

void printarr(int arr[], int n){
     for(int i = 0 ; i <= n; i++){
        cout << arr[i] <<" " ;
     }
     cout << endl;
}
int main () {
    //   int arr[5] = {1, 2, 3, 5,6};   // static memeory allocation
    /* lets make it dynamic memory allocation*/
    int n;
    cin >> n;
    int *arr = new int[n];

    // taking n elements as inputs  and put in array 
    for(int i = 0; i<n; i++){
        int data ;
        cin >> data;
        arr[i] = data;
    }
      printarr(arr, n);
    
}