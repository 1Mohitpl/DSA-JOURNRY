#include<iostream>
using namespace std;

int main () {

   int n; 
   cout << "Enter an value of an N : " << endl;
   cin >> n;

   for (int i = 0; i <n; i++)
   {
      for (int j = 0; j < n; j++)
      {
        if (i==0 || i == n-1 || j==0 || j==n-1)
        {
          cout << "*";
        }else{
           cout << " ";
        }
        
      }
      
      cout << endl;
   }
   
}































// #include<iostream>
// using namespace std;

// int main  () {

//      int n;
//      cout << "Enter an value of an N : " << endl;
//      cin >> n;

//      for (int i = 0; i <= n; i++)
//      {
//         for  (int j = 0; j < n-i; j++)
//         {
//             cout << "*";
        

//         }
//         cout << endl;
//      }
     
// }




































// #include<iostream>
// using namespace std;

// int main () {

//      int n ;
//      cout << "Enter an number : " << endl;                  // pattern print  
//      cin >> n;                                              

//      for (int i = 0; i <= n; i++)
//      {
//         for (int j = 0; j < i+1; j++)
//         {
//             cout << "*";

//         }  
//         cout << endl;
//      }
     
// }     