#include<iostream>
using namespace std;


// void printArray(int arr[], int n, int index){

//       //base case 
//       if(index >=n){
//         return ;                            // printing array of elements using recurrsion
//       }

//     //  cout << arr[index] << " ";

//      // recursive call

//      printArray(arr, n, index+1);
//       cout << arr[index] << " ";
// }

bool checksorted(int arr[], int n, int index){
       if(index >= n){
          return true;

       }

       if(arr[index] < arr[index+1]){
       
             return  checksorted(arr, n, index+1);
           
       } else{
        return false;
       }
}


int main(){
 int arr[] = {10,20,30, 5, 40,50};
 int n = 5;

 int index = 0;
  // printArray(arr, n, index);
  
 bool issorted =  checksorted(arr, n, index);

  if(issorted){
     cout << "array is sorted" << endl;
  } else{
    cout << "array is not sorted" << endl;
  }

}
































































// #include<iostream>
// using namespace std;


// int pow(int n){
//     if(n == 0){
//         return 1;
//                                                                   // pow of a number
//     } else{
//         return 2 * pow(n-1);           
//     }
// }
// int main (){
// int n;
// cout << "Enter your nuber : " << endl;
// cin >>n;
// int ans = pow(n);
// cout << ans << endl;




// }