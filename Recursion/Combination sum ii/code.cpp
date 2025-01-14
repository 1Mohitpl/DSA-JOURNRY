vector<vector<int>>result;

     void solve(vector<int>&candidates, int target, int indx, vector<int>&temp){
        if(target<0){
            return;
        }
         if(target == 0){
            result.push_back(temp);
            return;
         }

         for(int i = indx; i<candidates.size();i++){
                if(i>indx && candidates[i] == candidates[i-1]){
                    continue;
                }

                temp.push_back(candidates[i]);
                solve(candidates, target-candidates[i], i+1, temp);
                temp.pop_back();
         }
     }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
       
        vector<int>temp;
      sort(candidates.begin(),candidates.end());
        solve(candidates, target, 0, temp);
        return result;
    }