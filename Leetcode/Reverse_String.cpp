 int leftside = 0;
        int rightside = s.size()-1;
        while(leftside<rightside){
            char temp = s[leftside];
            s[leftside++] = s[rightside];
            s[rightside--] = temp;

        }
    }