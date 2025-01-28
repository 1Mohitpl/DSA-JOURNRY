int solve(vector<int>&nums, int n, int idx, vector<int>&dp){
         if(idx>= n){
            return 0;
         }
         if(dp[idx] != -1){
            return dp[idx];
         }

         int include = nums[idx] + solve(nums, n, idx+2,dp);
         int exclude = 0 + solve(nums, n, idx+1, dp);
         dp[idx] = max(include, exclude);
         return dp[idx];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1, -1);
        int ans = solve(nums, n, 0,dp);
        return ans;
    }