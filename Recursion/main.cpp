#include<iostream>
using namespace std;


void printArray(int arr[], int n, int index){

      //base case 
      if(index >=n){
        return ;
      }

    //  cout << arr[index] << " ";

     // recursive call

     printArray(arr, n, index+1);
      cout << arr[index] << " ";
}




int main(){
 int arr[] = {10,20,30,40,50};
 int n = 5;

 int index = 0;
  printArray(arr, n, index);

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