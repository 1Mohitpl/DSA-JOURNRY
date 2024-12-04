vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int startrow = 0;
        int endcol = col-1;
        int startcol = 0;
        int endrow = row-1;
        int total_elements = (row*col);
        int count = 0;
        while(count<total_elements){
            // startrow
            for(int i = startcol; i<=endcol && count < total_elements;i++){
                ans.push_back(matrix[startrow][i]);
                count++;
              
            }
              startrow++;
            // endcol
             for(int i = startrow; i<=endrow && count < total_elements; i++ ){
                ans.push_back(matrix[i][endcol]);
                count++;
                
            }
            endcol--;

             for(int i = endcol; i>=startcol && count < total_elements; i-- ){
                ans.push_back(matrix[endrow][i]);
                count++;
                
            }
            endrow--;

              for(int i = endrow; i>=startrow && count < total_elements; i-- ){
                ans.push_back(matrix[i][startcol]);
                count++;
                
            }
            startcol++;
        }
        return ans;
    }