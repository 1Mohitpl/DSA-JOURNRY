#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
 void rec (int no) {
   
    if (no == 0)
    {
       return;
    }
    
       cout << no <<  " " ;         
        rec (no-1);
 }
   

int main () {

     int no;
     cout << "Enter an number" << endl;
     cin >> no;

     rec (no);

}



















// #include<iostream>
// using namespace std ;

// int main (){

    
//    int fact = 1; int num ;

//    cout << " enter an nth value" << endl;

//    cin >> num;

//    for (int i = 1; i <= num; i++)
//    {
//         fact = fact *i;
//    }
   
//    cout << fact << endl;


// }