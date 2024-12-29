int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
         
        
        // get the total sum
        long long  total_sum = 0; 
        for(int i= 0; i<n; i++){
             total_sum += nums[i];
        }
           int result = INT_MAX;
           int index = -1;
           long long leftsum = 0;
           long long rightsum = 0;

         for(int i = 0; i<n; i++){
              leftsum +=  nums[i];
              rightsum = total_sum - leftsum;

             int leftelm = i+1;
             int rightelm = n - leftelm;

             long long left_avg = leftsum/leftelm;
             long long right_avg = (i == n-1) ? 0 : rightsum/rightelm;

             int diff = abs(left_avg - right_avg);
             if(result > diff){
                  result = diff;
                  index = i;
             }

         }
         return index;
    }