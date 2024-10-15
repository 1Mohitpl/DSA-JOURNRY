 int expand(string s, int i, int j){
     int count = 0;
     while( i>=0 && j<s.length() && s[i] == s[j]){
        count++;
         i--;
         j++;
     }
     return count;
  }
    int countSubstrings(string s) {
        int totalcount = 0;
        int n = s.length();
        for(int mainpoint = 0; mainpoint < n; mainpoint++){
            // for odd count 
            int oddcount = expand(s, mainpoint, mainpoint);
            int evencount = expand(s, mainpoint, mainpoint+1);
            totalcount += oddcount + evencount;
        }
        return totalcount;
    }