#include <iostream>
using namespace std;

int targetElement(int arr[], int start, int end, int target) {
    if (start > end) {
        // Element is not found
        return -1;
    }
    
    int mid = start + (end - start) / 2;
    
    // Base case
    if (arr[mid] == target) {                                            // using recursion in binary search to find an element in array and return index
        return mid;
    }
    
    if (arr[mid] < target) {
        return targetElement(arr, mid + 1, end, target);
    } else {
        return targetElement(arr, start, mid - 1, target);
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = size - 1;
    int target;
    
    cout << "Enter your target element: " << endl;
    cin >> target;

    int ans = targetElement(arr, start, end, target);
    
    if (ans != -1) {
        cout << "Element found at index: " << ans << endl;
    } else {
        cout << "Element not found" << endl;
    }
    
    return 0;
}





















// #include<iostream>
// using namespace std;

// bool checkSortd(int arr[], int size, int index ){            // check if array is sorted or not 
//    // base case
//    if(index>=size){
//       return true;

//    }

//     if(arr[index] > arr[index-1]){
//       // shifting karna hoga
//       // then call recursion 

//       bool ans =  checkSortd(arr, size, index+1);
      
//       return ans;
//     } else{
//       return false;
//     }
// }

// int main (){

//      int arr[] = {10,20,30,40,5,60};
//      int size = 6;
//      int index = 1;
     
//     bool isorted = checkSortd(arr, size, index );

//     if (isorted)
//     {
//       cout << "Array  is sorted" << endl;

//     } else{

//        cout << "Array is not sorted" << endl;
//     }
    
// }










































































// #include <iostream>
// #include <limits.h>
// #include <algorithm>
// using namespace std;
// // find maximum number in a array using recursion

// void findMax(int arr[], int size, int index, int &maxi)
// {
//    if (index >= size)
//    {
//       return;
//    }

//    maxi = max(maxi, arr[index]);

//    findMax(arr, size, index + 1, maxi);
// }

// int main()
// {

//    int arr[] = {10, 20, 30, 2, 50, 60};
//    int size = 6;
//    int index = 0;
//    int maxi = INT_MIN;

//    findMax(arr, size, index, maxi);
//    cout << maxi << endl;
// }

// #include <iostream>
// #include <algorithm>
// #include <cl
// using namespace std;
// // take referrence
// // solve ()=> store the even numbers in array into vector
// void solve(int arr[], int n, int index, vector<int> &ans)
// {
//    if (index >= n)
//    {
//       return;
//    }

//    if (arr[index] % 2 == 0)
//    {
//       ans.push_back(arr[index]);
//    }
//    // recursive calling

//    solve(arr, n, index + 1, ans);
// }

// int main()
// {
//    int arr[] = {10, 21, 30, 40, 55, 60};
//    int size = 6;
//    int index = 0;

//    vector<int> ans;
//    solve(arr, n, index, ans);

//    for (int num : ans)
//    {
//       cout << num << " ";
//    }
// }

// #include <iostream>
// using namespace std;
// // check in array if the element is preasent in the array or not using reccursion

// bool searchArray(int arr[], int n, int index, int target)
// {

//    if (index >= n)
//    {
//       return false;
//    }
//    if (arr[index] == target)
//    {
//       return true;
//    }

//    return searchArray(arr, n, index + 1, target);
// }

// int main()
// {

//    int arr[] = {10, 20, 30, 40, 50, 60};
//    int n = 6;
//    int index = 0;
//    int target;
//    cout << "Enter your target element : " << endl;
//    cin >> target;

//    bool ans = searchArray(arr, n, index, target);
//    cout << ans << endl;
// }