// brute force approach 
/* firstly find out the frequency of the elements in the array, the check if the element 
is vistied in the array then increase the frequency*/

int majortyElement(int nums[], int n){
    
      for(int val : nums){
          int freq = 0;
          for(int value : nums) {
            // check the each element in the array
            if(value == val){
                freq++;
            }
          }
          if(freq >n/2){
            return val;
          }
      }
      return val;
}

/* time compelexity will be O(N)^2*/


// another apporach sort the array then, traverse the array and store the freqency and update the ans

 int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int freq = 1;
        int ans = nums[0];
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                freq++;
            } else {
                freq = 1;
                ans = nums[i];
            }
            if(freq >n/2){
            return ans;
            }
        }
        return ans
    }

/*Time complexity will be O(NlogN)*/


// optimal approach moores voting element

/*time complexity will be O(N)*/

 int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int freq = 0;
        int ans = 0;
        for(int i = 0; i<n;i++){
            if(freq ==0){
                ans = nums[i];
            }
            if(ans == nums[i]){
                freq++;
            } else{
                freq--;
            }
        }
        return ans;
    }