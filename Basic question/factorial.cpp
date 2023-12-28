#include<iostream>
using namespace std ;

int main (){

    
   int fact = 1; int num ;

   cout << " enter an nth value" << endl;

   cin >> num;

   for (int i = 1; i <= num; i++)
   {
        fact = fact *i;
   }
   
   cout << fact << endl;


}