bool isValid(string s) {
        int n = s.length();
        stack<char>st;
        for(int i = 0; i<n; i++){
            char ch = s[i];
            if(ch == '(' || ch== '{' || ch== '['){
                // for opening bracket
                  st.push(ch);

            } else{
                //for closing bracket

                if(!st.empty()){
                    if(ch == ')' && st.top() == '('){
                    st.pop();
                } else if(ch == '}' && st.top() == '{'){
                    st.pop();
                } else if(ch == ']' && st.top() == '['){
                    st.pop();
                } else{
                    return false;
                }

                } else{
                    return false;

                }
                
            }
          
        }
        if(st.size() == 0){
            return true;
        } else{
            return false;
        }
    }