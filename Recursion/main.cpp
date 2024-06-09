#include<iostream>
using namespace std;


int pow(int n){
    if(n == 0){
        return 1;
                                                                  // pow of a number
    } else{
        return 2 * pow(n-1);           
    }
}
int main (){
int n;
cout << "Enter your nuber : " << endl;
cin >>n;
int ans = pow(n);
cout << ans << endl;




}