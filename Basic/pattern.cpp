#include <bits/stdc++.h>
using namespace std;

// Function to square a number
int squareNum(int num) {
     if(num == 0){
          return 0;
     }
    return num * num;  // Directly return the square
}

int main() {
    int t;
    cout << "Enter the test case :" << endl;
    cin >> t;  // Read the number of test cases
     int num;
    while (true) {
       
        cout << "Enter the num :" << endl;
        cin >> num;  // Read the number for squaring
        
        // Compute the square using the function
         
        
        // Output the result
        cout << squareNum(num) << endl;
    }
    return 0;
}


























// // create number using digits
// #include<iostream>
// using namespace std;

// int createNum (int numsize){
//      int number = 0;
//      for(int i = 0; i<numsize; i++){
//          int digit;
//          cout << "Enter digit :" << endl;
//          cin >> digit;
//          number = number * 10 + digit;
//          cout << "number is created so far :"  << number << endl;
//      }
//      return number;
// }

// int main () {
//      int numsize;
//      cout << "Enter size of num : " << endl;
//      cin >> numsize;
//      int num = createNum(numsize);
//      cout << "created number ->" << num << endl;    
// }



















































// #include<iostream>
// using namespace std;

// int main () {
//   int n = 5;
//   int sum = 0;
//   for(int i= 1; i<=n; i++){
//       sum+=i;
    
//   }
//     cout <<sum;
// }



































































// #include<iostream>
// using namespace std;

// int main () {
//     int n;
//     cout << "Enter an value of n :" << endl;
//     cin >> n;
//     int c = 1;
//     // growing phase
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<=i; j++){
//             cout <<c;
//               c++;
//               if(j<i){
//                 cout << "*";
//               }
            
//         }
//      cout << endl;
//      }
//      int start = c-n;
//      // lower phase
//       for(int i = 0; i<n; i++){
//           int m = start;
//             for(int j = 0; j<=n-i-1;j++){
//                 cout << m;
//                 m++;
//                 if(j<n-i-1){
//                     cout << "*";
//                 }
//             }
//             start = start-(n-i-1);
//              cout << endl;
//         }
       
// }



// 1
// 2*3
// 4*5*6
// 7*8*9*10
// 7*8*9*10
// 4*5*6
// 2*3
// 1

























































































// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter value of N :" << endl;
//     cin >> n;

//     // Upper half of the diamond (including the middle line)
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j <= i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     // Lower half of the diamond
//     for(int i = n - 2; i >= 0; i--) {
//         for(int j = 0; j <= i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// // *
// // **
// // ***
// // ****
// // *****
// // ****
// // ***
// // **
// // *