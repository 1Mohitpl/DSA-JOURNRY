#include<iostream>
using namespace std;


int pow(int x, int y){
    if(y == 0){
        return 1;

    } else{
        return x * pow(x, y-1);
    }
}
int main (){

int x = 2;
int y = 3;

int ans = pow(x,y);
cout << ans << endl;



}