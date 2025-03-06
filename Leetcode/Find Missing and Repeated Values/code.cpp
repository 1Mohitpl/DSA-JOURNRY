vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    vector<int>ans;
    unordered_set<int>st;
    int n = grid.size();
int a,b;
int expecsum = 0;
int originalsum = 0;
for(int i =0; i<n; i++){
    for(int j = 0; j<n; j++){
        originalsum += grid[i][j];
        if(st.find(grid[i][j]) != st.end()){
                                                  // means already preasent
           a = grid[i][j];
           ans.push_back(a);

        } 
        st.insert(grid[i][j]);
    }
     
}
 expecsum = (n*n) * (n*n +1) /2;
  b = expecsum + a - originalsum;
  ans.push_back(b);
  return ans;

}