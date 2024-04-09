#include<iostream>
using namespace std ;

int main () {

    int n ;
    cout << "Enter an value of N :" << endl;

    cin  >> n;
    for (int i = 0; i < n; i++)                                 // Numeric half hollow peramid
    {
        for (int  j= 0; j < i+1; j++)
        {
            if ( j== 0 || j == i || i == n-1)
            {
                cout << j+1;
            } else{
                 cout << " ";
            }
            
        }
        cout << endl;
    }
    
}

















// #include<iostream>
// using namespace std ;

// int main () {

//      int n;
//      cout << "Enter an value of an N: " << endl;
//      cin >> n;
//                                                                         // Numeric half piramid 
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i +1; j++)

//         {
//             cout << j +1;
            
//         }
//         cout << endl;
//     }
    
// }



































// #include <iostream>
// using namespace std;

// int main()
// {

//     int num;
//     cout << "Enter an number : " << endl;              //sum of even numbers in the given number
//     cin >> num;
//     int sum = 0;
    
//     for (int i = 0; i <= num; i++)
//     {
//         if (i % 2 == 0)
//         {
//             sum = sum + i;
//         }
//     }
//     cout << "Sum of even numbers in the given number is  :" << sum << endl;
// }


