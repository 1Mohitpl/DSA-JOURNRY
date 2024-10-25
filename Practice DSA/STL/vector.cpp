#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>v){
    int n = v.size();
    for(int i = 0; i<n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
// void printarr(int arr[], int n){
//      for(int i = 0 ; i <= n; i++){
//         cout << arr[i] <<" " ;
//      }
//      cout << endl;
// }
int main () {
    //   int arr[5] = {1, 2, 3, 5,6};   // static memeory allocation
    /* lets make it dynamic memory allocation*/
    // int n;
    // cin >> n;
    // int *arr = new int[n];

    // // taking n elements as inputs  and put in array 
    // for(int i = 0; i<n; i++){
    //     int data ;
    //     cin >> data;
    //     arr[i] = data;
    // }
    //   printarr(arr, n);
    vector<int>v;   // default vector with 0 size
    vector<int>arr(5, 2); // vector with 5 size with specific data
    
    // how to copy vector
    vector<int>arr4 = {1,2,3,4,5,7};
    vector<int>arr5(arr4);
    print(arr5);
    // v.push_back(1);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    // int n ;
    // cout << "enter size of vector" << endl;
    // cin >> n;
    // for(int i = 0; i<n; i++){
    //     int d;
    //     cin >> d;
    //     v.push_back(d);
    // }
    // // here using vector you can easily increase size of vector in array
    //  for(int i = 0; i<100; i++){
    //      v.push_back(10);
    //  }
    // print(v);
    
}