 vector<vector<int>> result;

    void solve(int k, int n, int indx, vector<int>& ans) {
        // Base cases 
        if (n < 0 || k < 0) return; // Invalid combination
        if (n == 0 && k == 0) { // Valid combination found
            result.push_back(ans);
            return;
        }

        // Iterate through numbers from `indx` to 9
        for (int i = indx; i <= 9; i++) {
            ans.push_back(i); // Include current number
            solve(k - 1, n - i, i + 1, ans); // Recur with updated parameters
            ans.pop_back(); // Backtrack
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> ans;
        solve(k, n, 1, ans); // Start solving
        return result;
    }