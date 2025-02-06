// retunrn minimum coins to get the amount
// memoraization technique
 int solvememo(vector<int>&coins, int amount, vector<int>&dp){
           // base case
           if(amount == 0){
              return 0;
           }

           if(dp[amount] != -1){
                return dp[amount];
           }
        // recursive relation
        int mini = INT_MAX;
        for(int i = 0; i<coins.size(); i++){
            
            if(amount - coins[i] >=0){
                 int recurans = solvememo(coins, amount - coins[i], dp);
                 if(recurans != INT_MAX){
                     int ans = 1 + recurans;
                     mini = min(ans, mini);
                 }
            }
        }
        dp[amount] = mini;
        return dp[amount];
   }
    int coinChange(vector<int>& coins, int amount) {
        int n = amount;
        vector<int>dp(n+1,-1);
        int ans  = solvememo(coins, amount, dp);
        if(ans == INT_MAX){
            return -1;
        } else {
            return ans;
        }
    }