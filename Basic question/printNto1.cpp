// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
 
//  void rec (int no) {
   
//     if (no == 0)
//     {
//        return;                                 // using Recursion 
//     }
    
//        cout << no <<  " " ;         
//         rec (no-1);
//  }
   

// int main () {

//      int no;
//      cout << "Enter an number" << endl;
//      cin >> no;

//      rec (no);

// }
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int fishSurvival(vector<int> &fishes) {
    stack<int> survivors;

    for (int i = 0; i < fishes.size(); i++) {
        while (!survivors.empty() && fishes[i] > survivors.top()) {
            // Current fish is larger, so it eats the fish on top of the stack
            survivors.pop();
        }
        // Push the current fish into the stack (it's a survivor for now)
        survivors.push(fishes[i]);
    }
    
    // The remaining fishes in the stack are the survivors
    return survivors.size();
}

int main() {
    vector<int> fishes = {4, 2, 3, 1, 5};
    cout << "Number of fishes that survive: " << fishSurvival(fishes) << endl;
    return 0;
}
