
// #include<iostream>
// using namespace std;

// void convertarray(int arr[], int size){
//      int i = 0;
//     int j = 1;
//     while(j<size){
//             if(arr[i] <= arr[j]){
//                 swap(arr[i], arr[j]);
//                 i = i+2;
//                 j = j+2;
//             }
//         }
// }

// int main () {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = 5;

//     convertarray(arr,5);
//     for(int i = 0; i<size; i++){
//         cout << arr[i] << endl;
//     }

// }

#include<iostream>
using namespace std;

int solve(int arr[], int n){
    int eleage = 18;
    int count = 0;

    for(int i = 0; i<n; i++){
        if(arr[i] >= eleage){
            count++;
        }
    }
    return count;
}

int main () {

    int arr[] = {10, 20, 15, 23, 30};
    int n = 5;

    int ans = solve(arr, n);
    cout << ans << endl;
}






























// // check the string is palindrom or not using RE
// #include<iostream>
// using namespace std;

// bool ispalindrom(string&s, int start, int end) {

//     if(start>=end){
//         return true;
//     }

//     if (s[start] != s[end])
//     {
//          return false;
//     }
//      return ispalindrom(s, start+1, end-1);
// }

// int main (){

//     string s;
//     cout << "Enter an string" << endl;
//     cin >>s;
//    cout << ispalindrom(s, 0, s.size()-1) << endl;
  
     


// }

// #include<iostream>
// using namespace std;

// bool isprime(int x){
//      if(x & 1){
//          return true;
//      } else{ 
//         return false;
//      }
// }

// int main () {
//       int x;
//       cout << "Enter an number : " << endl;
//       cin >>x;
      
//     int ans =  isprime(x);
//      if (ans  == 1)
//      {
//         cout << "odd number" << endl;
//      }
//      else{
//         cout << "even nmber" << endl;
//      }
// }






































































// #include <iostream>
// using namespace std;

// // difin function

// bool ispalindrom(int x)
// {
//     if (x < 0)
//     {
//         return false;
//     }

//     int temp;
//     temp = x;
//     int reverseNum = 0;
//     int digit;
//     while (x > 0)
//     {
//         digit = x % 10;                          // find it last digit
//         reverseNum = (reverseNum * 10) + digit; // put that digit into the reversenum
//         x = x/ 10;
//     }

//     if (temp == reverseNum)
//     {
//         return true;
//     } else{
//         return false;
//     }
    
   
// }

// int main()
// {
//     int x;
//     cout << "Enter an input number :" << endl;
//     cin >> x;

//   int ans = ispalindrom(x);
//     if (ans == 1)
//     {
//         cout << "the number is palindrom" << endl;
//     }
//     else
//     {
//         cout << "Number is not a palindrom number" << endl;
//     }
// }