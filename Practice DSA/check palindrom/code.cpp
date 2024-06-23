#include<iostream>
using namespace std;


bool checkpalin(int &x) // here passing parameter
 int temp = x;
 int rev = 0;
 

 if(temp<0){
    return false;
 }

    while(temp>0){
        int digit = x % 2;  // find the last degit;
         rev = (rev * 10) + digit;
         x = x / 10;
    }

    if(temp == rev){
        return true;
    }else{
        return false;
    }
int main(){

    int x;
    cout << "Enter an number :" << endl;
    cin >>x;
    int ans = checkpalin(x);

    if(ans == 1){
        return true;
    } else{
        return false;
    }


}