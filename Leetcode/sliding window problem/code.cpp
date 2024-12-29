#include<iostream>
#include<deque>
using namespace std;



  array = [2, 5, -1, 7 , -3, -1, -2];    k = 4;

     2, 5, -1, 7 => here max=  7 min= -1; sum = 6;
     5, -1, 7, -3 = > here max = 7; min = -3; sum = 4;
	 -1, 7, -3, -1 = max - 7 ; min  = -3; sum = 4;
     ans = 18;

     maxdq = {3,4,5,  }; 
     mindq = {2,};
 
 
 
 int max = INT_MIN;
 int min = INT_MAX;
 for(i =>n-1){  
    for(o ->k){
        max = 
        min = 
        sum = 
    }
    return;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 int  sumofmaxmin(vector<int>& nums, int k) {
        int ans  = 0;
        deque<int>dq;
        deque<int>mindq;  // it can store the minimum elements	

        // process the first window

        for(int i = 0; i<k; i++){
            while(!dq.empty() && dq.back() < nums[i]){
                dq.pop_back();
            }
			 while(!mindq.empty() && dq.back() > nums[i]){
                mindq.pop_back();
            }

            dq.push_back(i);
			mindq.push_back(i);

        }
        // ans shoudle be in the front element 
       
	       ans += nums[dq.front() + mindq.front()];
	   
        // now moving the remaining window
        for(int i =k; i<nums.size(); i++){
            
            // if my window become outofbound
            if(dq.front() == nums[i-k]) dq.pop_front();
			
			 if(mindq.front() == nums[i-k]) mindq.pop_front();

             // pop the out the smaller element
             while(!dq.empty() && dq.back() < nums[i]){
                dq.pop_back();
            
            // pop the bigger element
             while(!mindq.empty() && mindq.back() > nums[i]){
                mindq.pop_back();
             

            dq.push_back(i);
            mindq.push_back(i);
            ans += nums[dq.front() + mindq.front()];

        }
        return ans;
    }
}