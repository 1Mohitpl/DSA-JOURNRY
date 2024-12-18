 bool isSubsequence(string s, string t) {
        int m = s.size();
        int n = t.size();
        int i = 0;
        int j = 0;
        while(i<m && j<n){
            if(s[i]== t[j]){
                i++;
            }
            j++;
        }
        if(i==m){
            return true;
        }
        return false;
    }