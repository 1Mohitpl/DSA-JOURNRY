sort(nums.begin(), nums.end());   // using sorting approach here, after that triverse the array 
                                  // and check the each element with others elements

        for(int i =0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                return nums[i];
            }
        }
        return -1;

        // using Set
    
        int findDuplicate(vector<int>& nums) {
            unordered_set<int>st;
            int  n = nums.size();
   
            for(int i = 0; i<n; i++){
                 if(st.find(nums[i]) != st.end()){
                        // measn preasent;
                  return nums[i];
                 } 
                 st.insert(nums[i]);
            }
            return -1;
       }