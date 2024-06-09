#include<iostream>
using namespace std;
 // check in array if the element is preasent in the array or not using reccursion

bool searchArray(int arr[], int n, int index, int target){

    if(index>=n){
        return false;
    }
     if (arr[index] == target)
     {
        return true;
     }


    return searchArray(arr, n, index+1, target);          
     
}

int main (){

    int arr[] = {10, 20,30, 40, 50, 60};
    int n  = 6;
    int index =0;
    int target;
    cout << "Enter your target element : " << endl;
    cin>> target;

    bool ans = searchArray(arr, n, index, target);
    cout << ans <<endl;
}