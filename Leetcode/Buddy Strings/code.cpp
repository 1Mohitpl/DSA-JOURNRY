bool buddyStrings(string s, string goal) {
        int n = s.length();
        int diff = 0;
        
        if(s.length() != goal.length())
        return false;
        int first_diff = 0;
        int second_diff = 0;
        if (s == goal) {
        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
            if (freq[c - 'a'] > 1) return true; // Duplicate found
        }
        return false; // No duplicate, swap not possible
    }


        for(int i = 0; i<n; i++){
            if(s[i] != goal[i]){
                diff++;
                if(diff > 2){
                    return false;
                } else if (diff == 1){
                    first_diff = i;
                } else{
                    second_diff = i;
                }
            }
        }
        return s[first_diff] == goal[second_diff] && s[second_diff] == goal[first_diff];
    }