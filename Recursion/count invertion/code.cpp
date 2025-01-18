#include<iostream>
#include<vector>
using namespace std;

int merge(vector<int>&arr, int start,  int mid,  int end){
    vector<int>temp;

    int i = start;
    int j = mid+1;
    int invcount = 0;
    while(i<= mid && j<= end){
         if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
         } else {
              temp.push_back(arr[j]);
              j++;
              invcount += (mid-i+1);
         }
    }

    while(i<= mid){
        temp.push_back(arr[i]);
            i++;
    }

    while(j<= end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx = 0; idx<= temp.size(); idx++){
        arr[idx+start] = temp[idx];
    }
    return invcount; 
}

int mergsort(vector<int>&arr, int start, int end){
    //base case
    if(start>= end) {
        return 0;
         
    }

    // break the problem into two small problem 
    int mid = start + (end-start)/2;
    
    // now the porblem is breaks into two parts once is left part, another part is right part

    //for the left part
    int leftInvcount = mergsort(arr, start,mid);
    // for the right part
    int rightInvcount = mergsort(arr, mid+1, end);
     
    int invcount = merge(arr, start, mid, end);
    return leftInvcount + rightInvcount + invcount;
  
}
int main() {
     vector<int>arr = {6, 3, 5, 2, 7};
     
     int start = 0;
     int end = arr.size()-1;
     int ans = mergsort(arr, start, end);
     cout << ans << endl;
     return 0;
}