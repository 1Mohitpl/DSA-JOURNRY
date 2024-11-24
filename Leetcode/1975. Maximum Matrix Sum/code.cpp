 long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        long long maxsum = 0;
        int countNegative = 0;
        int smallestnum = INT_MAX;

        for(int i= 0; i<n; i++){
            for(int j = 0; j<n; j++){
                maxsum+= abs(matrix[i][j]);

                if(matrix[i][j] <0){
                    countNegative++;
                }
                smallestnum = min(smallestnum, abs(matrix[i][j]));
            }
            
        }
        if(countNegative % 2 == 0){
            return maxsum;
        }
        return maxsum -2*smallestnum;
    }