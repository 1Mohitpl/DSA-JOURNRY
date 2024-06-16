#include<iostream>
using namespace std;

void lastOccurence(string str, int i, char target, int &ans ){
    //base case

    if(i>=str.size()){
        return;
    }

    if(str[i] == target){
        ans = i;
    }

    // recursive call
    lastOccurence(str, i+1, target, ans);
}

int main(){

     string str;
     int ans = -1;
     cout << "Enter an input string" << endl;
     cin >> str;
     char target;
     cout << "Enter the target character :" << endl;
     cin >> target;
      lastOccurence(str, 0, target, ans);
     cout << "Last index :" << ans << endl;
}