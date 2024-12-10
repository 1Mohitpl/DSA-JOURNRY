int missingNumber(vector<int>& nums) {
        // math apporach
        int n = nums.size();
        int total_sum = n * (n+1)/2;

        for(int  i= 0; i<n; i++){
            total_sum -= nums[i];
        }
        return total_sum;
    }

// using xor approach
int missingNumber(vector<int> & nums){
       
       int ans= 0;
       for(int i = 0; i<nums.size() ; i++){
           ans^ = nums[i];
           ans^=i;
       }
       return ans;
}




