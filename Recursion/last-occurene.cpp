#include<iostream>
using namespace std;
void lastoccurence(string str, int i, char target, int &ans){   // here takeing argunment 
    // base case

    if(i>=str.size()){
        return;
    }

    if(str[i] == target){
        ans = i;
    }

    lastoccurence(str, i+1, target, ans);   // just passing the arguement 

}

int main (){
  string str;
     int ans = -1;
     cout << "Enter an input string" << endl;
     cin >> str;
     char target;
     cout << "Enter the target character :" << endl;
     cin >> target;
      lastoccurence(str, 0, target, ans);
     cout << "Last index :" << ans << endl;
}