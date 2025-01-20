bool issafe(vector<string>&board, int row, int col, int n){
      // horizontal

      for(int j = 0; j<n; j++){
         if(board[row] [j] == 'Q') {
            return false;
         }
      }

       for(int i =0; i<n; i++){
          if(board[i][col] == 'Q'){
            return  false;

          }
       }

       // dynamically
       for(int i = row, j = col; i>=0 && j>=0; i--, j--){
          if(board[i][j] == 'Q'){
            return false;
          }
       }
       for(int i = row, j= col; i>=0 && j<n; i--, j++){
          if(board[i][j] == 'Q'){
            return false;
          }
       }
       return true;
   }
   void Nqueens(vector<string>&board, int row, int n, vector<vector<string>>&ans){
        if(row == n){
            ans.push_back({board});
            return;
        }

        for(int j =0; j<n; j++){
            if(issafe(board, row, j, n)){
                board[row][j] = 'Q';
                Nqueens(board, row+1, n, ans);
                board[row][j] = '.';
            }
        }
   }
    vector<vector<string>> solveNQueens(int n) {
        // have to initilize our size of board and with dot
        vector<string> board(n, string(n, '.'));
        vector<vector<string>>ans;
        Nqueens(board, 0, n, ans);
        return ans;
    }