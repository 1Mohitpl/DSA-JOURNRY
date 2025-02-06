// using Tabulation approach in dynamic programming
int solve(vector<int>&dp, int n ){
        // initial value 
         dp[0] = 1;
         dp[1] = 1;
         // remaining values 
         if(n==0)
         return dp[0];
         for(int i = 2; i<=n; i++){
            dp[i] = dp[i-1] + dp[i-2];
         }
         return dp[n];

    }
    int climbStairs(int n) {
        // create dp array
        vector<int>dp(n+1, -1);
        int ans = solve(dp, n);
        return ans;
    }
// can i opttmized  the space,

int solve(int n ){
        // initial value 
        int prev =1;
         int curr = 1;
         int ans = 0;
         // remaining values 
         if(n<=1)
         return n;
         for(int i = 2; i<=n; i++){
              ans = prev + curr;
            prev = curr;
            curr = ans;
         }
         return ans;

    }
    int climbStairs(int n) {
    
        int result = solve(n);
        return result;
    }