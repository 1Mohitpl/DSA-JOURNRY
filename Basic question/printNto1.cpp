#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
 void rec (int no) {
   
    if (no == 0)
    {
       return;                                 // using Recursion 
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
