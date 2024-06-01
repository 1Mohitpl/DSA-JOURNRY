int row = matrix.size();
        int col = matrix[0].size();
        int n = row*col;
        int s = 0;
        int e = n-1;

        while(s<=e){
            int mid = s+(e-s)/2;
            int rowIndex = mid/col;
            int colIndex = mid%col;
            int currentNumnber = matrix[rowIndex] [colIndex];
            if(target == currentNumnber) {
                  return true;
            } else if(target>currentNumnber) {
                s = mid +1;


            } else {
                e = mid-1;
            }
        }
        return false;