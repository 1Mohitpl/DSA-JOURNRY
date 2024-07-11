string reverseParentheses(string s) {
        stack<int> skiplength;
        string value;

        for(char &ch :s){
            if(ch == '('){
                skiplength.push(value.length());
            } else if(ch == ')'){
                int k =  skiplength.top();
                 skiplength.pop();
                 reverse(begin(value)+k, end(value));

            } else{
                value.push_back(ch);
            }
        }
       
       return value;
        
    }