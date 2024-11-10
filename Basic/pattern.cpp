#include<iostream>
using namespace std;

int main () {
  int n = 5;
  int sum = 0;
  for(int i= 1; i<=n; i++){
      sum+=i;
    
  }
    cout <<sum;
}



































































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