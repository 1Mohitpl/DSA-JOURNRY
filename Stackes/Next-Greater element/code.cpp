#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int>nextGreater(int *arr, int size, vector<int>&ans){
     stack<int>st;
     st.push(-1);  // initially push -1

     for(int i = size-1; i>=0; i--){
         int curr = arr[i];
         while( st.top()  !=-1  && st.top() <= curr){
              st.pop();
         }

         ans[i] = st.top(); // store the ans
         st.push(curr);
     }
     return ans;
}


int main() {
  int arr[]= {6, 8, 0, 1, 3};
  int size = 5;
  vector<int>ans(size);

  ans = nextGreater(arr,size,ans);
   for(auto i : ans){
    cout<< i << " ";
   }

   cout << endl;
   return 0;

}