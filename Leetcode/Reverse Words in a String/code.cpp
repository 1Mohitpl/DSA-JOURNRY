string reverseWords(string s) {
        int n = s.length();
        reverse(s.begin(), s.end()); // first reverse the whole string to fix position 
        string ans = "";

        for(int i = 0; i<n; i++){
            string word = "";
            while(i<n && s[i] != ' '){
                word+= s[i];
                i++;
            }

            reverse(word.begin(), word.end());  // to fix the form of every character of word
            if(word.length() >0){
                ans+=" " + word;
            }
        }
        return ans.substr(1);

    }