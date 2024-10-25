#include<iostream>
using namespace std;

void printarr(int arr[], int n){
     for(int i = 0 ; i <= n; i++){
        cout << arr[i] <<" " ;
     }
     cout << endl;
}
int main () {
      int arr[5] = {1, 2, 3, 5,6};   // static memeory allocation
      int n = 5;
      printarr(arr, n);
}