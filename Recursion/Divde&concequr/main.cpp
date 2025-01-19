#include<iostream>
using namespace std;

void merge(int arr[], int start, int end){
    
    
}

void mergsort(int arr[], int start, int end,){
    //base case
    if(start>= end) {
        return;
         
    }

    // break the problem into two small problem 
    int mid = start + (end-start)/2;
    
    // now the porblem is breaks into two parts once is left part, another part is right part

    //for the left part
    mergsort(arr, s,mid);
    // for the right part
    mergsort(arr, mid+1, end);
     
    merge(arr, start, end);
  
}

int main (){

    int arr[] = {2,1, 6,9, 4,5};
    int size = 6;
    int start = 0;
    int end = size-1;

    margsort(arr, start, end,)
}