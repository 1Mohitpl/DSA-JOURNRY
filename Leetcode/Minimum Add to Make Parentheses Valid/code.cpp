int minAddToMakeValid(string s) {
        // lets solve it using stack
        stack<int>st;
        int size = 0;
        for(char &ch : s){
            if(ch == '('){
                st.push(ch);
            } else if(!st.empty()){
                st.pop();
            } else{
                size++;
            }
        }
        return size + st.size();
    }