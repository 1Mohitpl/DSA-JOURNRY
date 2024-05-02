// #include<iostream>

// using namespace std ;


//  void countZero (int arr[], int size) {

//      int zerocount = 0;
//      int onecount = 0;

//      for (int i = 0; i < size; i++)
//      {                                                                 // count  "0" and "1" in an array
//          if (arr[i] == 0)
//          {
//             zerocount++;
//          }
//          if (arr[i] == 1)
//          {
//             onecount++;
//          }
         
//      }
     
//      cout << "zerocount" << zerocount << endl;
//      cout << "onecount" << onecount << endl;
//  }
// int main () {

//     int arr [] = {0,1,0,1,1,1,0,0,0,0,0,1,1,1};
//     int size = 14;
    
//     countZero( arr, size);
// }

#include<iostream>
#include<limits.h>
using namespace std;


int findminnumber (int arr[], int total) {

    int minAns = INT_MAX;

     for (int i = 0; i < total; i++)
     {
          if (arr[i] < minAns)
          {                                                            // find minimum number in a array
             minAns = arr[i];
          }
          
     }
      return minAns;
}  





int main () {
     
     int arr[] = {12,4,5,7,9,10,3,2};

     int total = 8;

     int result = findminnumber(arr, total);

     cout << "minimum number : " << result << endl;
}


#include<iostream>
#include<limits.h>

using namespace std ;

int maxNumber = INT_MIN;
  
  int returnMax (int arr[] , int size) {

     for (int i = 0; i < size; i++)                                  // find the maximum number of given array 
     {
          if (arr[i] > maxNumber ) 
          {
               maxNumber = arr[i];
          }
          
     }

     return maxNumber;
     
  }

int main () {
    
    int arr [] = {2,10,12,7,9,11,14};

    int size = 7;

    int result = returnMax(arr, size);

    cout << " maximum number in the given array is : " << result << endl;

}
