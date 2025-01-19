// you have given an string str; an you have to print all the possible
// all the combinations of that string;



#include<iostream>
#include<vector>
#include<string>
using namespace std;

void perm(string &str, int idx){
    if(idx == str.length()){
        cout << str << " ";
        return;
    }

    for(int i = idx ; i<str.length(); i++){
         swap(str[idx], str[i]);
         perm(str, idx+1);
         swap(str[idx], str[i]); // this is basically backtracking
    }
}

int main(){
   string str = "abc";
   int idx = 0;
   perm(str, idx);
}