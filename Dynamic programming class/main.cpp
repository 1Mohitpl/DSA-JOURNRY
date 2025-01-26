// fibonacci problem using dynamic programming

int solvememo(vector<int>&dp, int n){
        // base case
        if(n<=1){
            return n;
        }

        // check if already exist or not
        if(dp[n] != -1){
            return dp[n];
        }

        dp[n] = solvememo(dp, n-1) + solvememo(dp, n-2);   // store the ans into the dp, to optimize the time complexity
        return dp[n];

    }
    int fib(int n) {
        // create a dp array
        vector<int>dp(n+1, -1);
        int ans = solvememo(dp,n);
        return ans;
    }