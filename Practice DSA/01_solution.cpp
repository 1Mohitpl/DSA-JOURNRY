// print all the elements in array

#include<iostream>
#include<vector>
using namespace std;

void printelement(int arr[], int size, int index ){
      if(index >= size){
        return;
      }



      printelement(arr, size, index+1);
       
        cout << arr[index] << " ";
       
}

 void evenNumber(int arr[], int size, int index, vector<int>&ans){
        if(index >=size){
            return;
        }

        if(arr[index] % 2 == 0){
             ans.push_back(arr[index]);
        }

        evenNumber(arr, size, index+1, ans);
 }

int main() {
      int arr[] = {1,3, 4, 5, 6, 7,8,9};
      int size = 8;
      int index = 0;

      vector<int>ans;

     
      evenNumber(arr, size, index, ans);

  for(int i = 0; i<ans.size(); i++){
       cout << ans[i] << endl;
  }

      

      
}













































































// //reverse the string using recurrsion

// #include<iostream>
// #include<queue>
// using namespace std;


// void reverse(string&s, int p1, int p2){

//       //base case
//       if (p1>= p2)
//       {
//          return;
//       }

//       swap(s[p1], s[p2]);
//       reverse(s, p1+1, p2-1);

// }

// int main(){

//    string s;
//    cout << "Enter an string :" << endl;
//    cin >> s;
//    reverse(s, 0 , s.size()-1);
//    cout << s << endl;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

//   void solve(int arr[], int size , int index, vector<int>&anseven, vector<int>&ansOdd){

//     if(index >= size){
//         return;
//     }

//      if(arr[index] %2==0){
//         anseven.push_back(arr[index]);
//      }
//      if(arr[index]%2==1){
//         ansOdd.push_back(arr[index]);
//      }

//      solve(arr, size, index+1, anseven, ansOdd);

//   }
// int main (){
//     int arr[] = {10, 2, 15, 20,29,27};
//     int size = 6;
//     int index = 0;

//     vector<int>anseven;
//     vector<int>ansOdd;

//     solve(arr, size, index, anseven, ansOdd);

//     // print ans using foreach loop

//     for(int num: anseven ){
//         cout << "Even numbers : " << num << " ";
//     }
//      cout << endl;
//    for(int num : ansOdd){
//     cout << "Odd Numbers :" << num << " ";
//    }

// }

// #include <iostream>

// using namespace std;

// bool checkprimeornot(int n)
// { // check the number is prime number or not a prime number

//     if (n == 2)
//     {
//         return true;
//     }

//     if (n % 2 == 0)
//     {
//         return false;
//     }
//     else
//     {
//         return true;
//     }
// }

// int main()
// {

//     int n;
//     cout << "Enter a number here : " << endl;
//     cin >> n;
//     bool ans = checkprimeornot(n);

//     if (ans == 0)
//     {
//         cout << "Not a Prime nuber" << endl;
//     }
//     else
//     {
//         cout << "prime number" << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// bool checkNumber(int n)
// {

//     if (n % 2 == 0)
//     { // check the number is even or odd
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// int main()
// {

//     int n;
//     cout << "Enter an numer here : " << endl;
//     cin >> n;

//     bool ans = checkNumber(n);

//     if (ans == 1)
//     {
//         cout << "Number is even" << endl;
//     }
//     else
//     {
//         cout << "Number is odd" << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int sumofEvennumbers(int n)
// {
//     int sum = 0;
//     for (int i = 2; i <= n; i++)
//     { // sum of all even numbers 1 to N
//         if (i % 2 == 0)
//         {
//             sum = sum + i;
//         }
//     }
//     return sum;
// }

// int main()
// {

//     int n;
//     cout << "Enter an number here : " << endl;
//     cin >> n;
//     int ans = sumofEvennumbers(n);
//     cout << "sum of all even numbers : " << ans << endl;
// }

// #include <iostream>
// using namespace std;

// int sumofnumbers(int n)
// {
//     int sum = 0;
//     for (int i = 0; i <= n; i++)
//     {
//         sum = sum + i;
//     }
//     return sum;
// }

// // sum of all numbers upto N

// int main()
// {

//     int n;
//     cout << "Enter an number : " << endl;
//     cin >> n;

//     int ans = sumofnumbers(n);
//     cout << "sum of all numbers upto N : " << ans << endl;
// }




//sum of all odd number in an array 

// #include<iostream>
// #include<queue>
// using namespace std;

// int sumofOddNumber(int arry[], int size){
//    int sum = 0;
//    for (int i = 0; i < size; i++)
//    {
//       if (arry[i] % 2 == 1)
//       {
//          sum += arry[i];
//       }
      
//    }
//    return sum;
// }


// void levelorderTraversal(Node* root){
//      queue<Node*>q;
//      q.push(root);
//      q.push(NULL);

//      while(q >1){
//         Node* front = q.front();
//         q.pop();

//         if(front == NULL){
//             cout << endl;
//             q.push(NULL);
//         } else{
//             cout << front.data() << endl;
//             if(front->left != NULL){
//                 q.push(front->left);
//             }
//             if(front->right != NULL){
//                 q.push(front->right);
//             }
//         }
//      }

// }

// int main (){
//    int arry[] = {1,2,3,4,6,5,7,9,11};
//    int size = 9;

//    int ans = sumofOddNumber(arry, size);
//    cout << "sum of odd numbers in array : " << ans << endl;
// }





