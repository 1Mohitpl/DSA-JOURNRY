#include<iostream>
using namespace std;

int flipnumber(int start, int goal){
    int count = 0;
int ans  = start ^ goal;
while(ans){
     if( ans & 1){
        count ++;
     }
     ans = ans >>1;
}
return count;
}

int main(){
    int start = 10;
    int goal = 7;
    int result = flipnumber(start, goal);
    cout << result << endl;
}





