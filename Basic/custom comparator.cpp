#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void print(vector<int>&v){
    for (int i = 0; i <v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

}

bool mycomp(int &a, int &b){
    // return a<b;  // cutome increasing order sorting 
    return a>b;     // decreasing order sorting   
} 

int main () {
     vector<int>v = {44,55,22,11};
    //  sort(v.begin(), v.end());   // inceasing order sorting
     sort(v.begin(), v.end(), mycomp);
    print(v);
      return 0;


}