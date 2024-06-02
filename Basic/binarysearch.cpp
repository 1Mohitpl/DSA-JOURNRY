// #include <iostream>
// using namespace std;

// int binarysearch(int arr[], int n, int target) {
//     int start = 0;
//     int end = n - 1;

//     while (start <= end) {
//         int mid = (start + end) / 2;
        
//         // Check if the target is present at mid
//         if (arr[mid] == target) {
//             return mid; // Return the index of the found element
//         }
        
//         // If target is greater, ignore the left half
//         else if (arr[mid] < target) {
//             start = mid + 1;
//         }
        
//         // If target is smaller, ignore the right half
//         else {
//             end = mid - 1;
//         }
//     }
    
//     // Target was not found
//     return -1;
// }

// int main() {
//     int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
//     int target = 50;
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int targetResult = binarysearch(arr, n, target);
//     if (targetResult == -1) {
//         cout << "Element is not found" << endl;
//     } else {
//         cout << "Target element found at index " << targetResult << endl;
//     }
// }


// //++++++++++++++++++++++++++++find firsr first occurence in the given array



// #include<iostream>
// using namespace std;



// int findFirstoccurence(int arr[], int n, int target ){

//     int start  = 0;
//     int end = n-1;
//     int mid = start +(end-start)/2;   // best practice 
//     int ans = -1;
//     while (start<=end){
//          int mid = (start+end)/2;
//         if (arr[mid] == target)
//         {
//             ans = mid;
//             // left shit
//             end  = mid-1;
//         } else if (arr[mid] < target)
//         {
//             start = mid+1;
//         } else if (arr[mid]>target)
//         {
//               end = mid-1;
//         }
        
        
        
//     }
//     return ans;
    
// }






// int main () {

//     int arr[] = {10,20,30,30,30,30,40,50,50,60,70};
//     int n = 11;
//     int target = 50;

//     int result = findFirstoccurence(arr,n,target);
//     cout << "first occurence: " << result << endl;


// }


// //+++++++++++++++ find missing elemeent in the given array

// #include<iostream>
// using namespace std;

// int findMissing (int arr[], int n) {

//     int start = 0;
//     int end = n-1;
//     int mid = start+(end-start)/2;
//     int ans = -1;
//     while (start <=end){
//          int mid = start+(end-start)/2;
//         int diff = arr[mid]- mid;
//         if (diff==1)
//         {
//             //right shift
//             start = mid+1;

//         } else {
//             //ans store
//             ans = mid;
//             end = mid-1;

//         }
        
//     }
//     return ans +1;
// }


// int main () {

//     int arr[] = {1,2,3,4,6,7,8,};
//     int n = 8;
//     int result = findMissing(arr, n);
//     cout << "missing number is :" << result << endl;

// }



//++++++++++++++++Binary search on nearly sorted array

#include<iostream>
using namespace std;

int searchRotated(int arr[], int n,  int target){
    int s = 0;
    int e = n-1;
    while(s<=e) {
        int mid = s+(e-s)/2;
        if (mid>=0 && arr[mid]==target)
        {
            return mid;
        } if (arr[mid-1] == target){
            return mid-1;
        } if (arr[mid+1]==target)
        {
            return mid+1;
        }
        
        if (target>arr[mid])
        {
            s = mid+2;    //  for checking index one at a time
        } else{
            e= mid-2;
        }
        
        
    }
    return -1;
}

int main() {
   int arr[] = {20,10,30,50,40,70,60};
   int n = 7;
   int target = 60;

   int targetIndex = searchRotated(arr, n, target);
   if (targetIndex == -1)
   {
     cout << "Element is not found" << endl;
   } else{
      cout << "Element is  found : " << targetIndex << endl;
   }
   
}