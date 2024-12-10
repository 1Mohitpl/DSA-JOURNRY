 // using stack T.C -> O(n); S.C-> O(n);
 
 int maxDepth(string s) {
        stack<char>st;
        int result = 0;
        for(auto ch : s){
            if(ch == '('){
                st.push(ch);
            } else if(ch == ')'){
                st.pop();
            }
            result = max(result, (int)st.size());
        }
        
        return result;
    }

// without space 
int maxDepth(string s) {
        int startBracket = 0;
        int result = 0;
        for(auto ch : s){
            if(ch == '('){
               startBracket++;
            } else if(ch == ')'){
               startBracket--;
            }
            result = max(result, startBracket);
        }
        
        return result;
    }