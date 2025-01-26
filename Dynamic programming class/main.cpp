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

/*solving using tabulation method (bottom-up approach)*/

 
    int solvtebu(int n ){
        // create an dp array
        vector<int>dp(n+1, -1);
        // assign base from analysis the problem
        dp[0] = 0;
        if(n==0){
            return 0;
        }

        dp[1] = 1;
        // now we can store remaning in dp array using loop
        for(int idx = 2; idx<=n; idx++){
            dp[idx] = dp[idx-1] + dp[idx-2];
        }
 
        return dp[n];
    }
   
    int fib(int n) {
        int ans = solvtebu(n);
        return ans;
    }

