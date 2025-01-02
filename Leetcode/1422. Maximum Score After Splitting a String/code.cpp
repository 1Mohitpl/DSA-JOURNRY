int maxScore(string s) {
        int n = s.length();
        int result = INT_MIN;
        int total_one_count = 0;
        // count total 1
        for(int i = 0; i<n; i++){
            if(s[i] == '1'){
               total_one_count++;
            }
        }
          int zero_count = 0;
          int left_one = 0;
        for(int i= 0; i<=n-2; i++){
            if(s[i] == '0')
            zero_count++;
            if(s[i] == '1'){
                 left_one++;
            }
            int right_one = total_one_count - left_one;
            result = max(result,  zero_count + right_one );
        }
        
        return result;
    }