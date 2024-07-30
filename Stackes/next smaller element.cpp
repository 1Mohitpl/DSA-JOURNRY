#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextsmallerelement(int *arr, int size, vector<int> &ans){
    //create an stack
    stack<int>st;
    // initially stack's element is -1
    st.push(-1);

    for (int i = size-1; i >=0; i--)
    {
        int curr = arr[i];
        while (st.top() >= curr)
        {
            st.pop();
        }
         ans[i] = st.top();  // store the ans;
         st.push(curr);
        
    }

    return ans; 
    
}

int main(){
  int arr[] = {8, 4, 6, 2, 3};
  int size = 5;
  vector<int> ans(size);  //for access the index you have to give size as an argument
  
  ans = nextsmallerelement(arr, size, ans);

  for(auto i : ans){
    cout << i << " "; 
      }

      cout << endl;
   return 0;

}