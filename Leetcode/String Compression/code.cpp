int compress(vector<char>& chars) {
        char prev = chars[0];
        int index = 0;
        int count = 1;
        for(int i = 1 ; i<chars.size(); i++){
            if(chars[i]== prev){
                count++;
            } else {
                chars[index++] = prev;
                if(count >1){
                    int start = index;   // store the index into start
                    while(count){
                        chars[index++] = (count %10) + '0';   // store atlease significant bit and convert into the char
                        count/=10;  
                    }
                    reverse(chars.begin() + start, chars.begin() + index );   // reverse the character
                }
                prev = chars[i];
                count =1;
            }
        }
       chars[index++] = prev;
        if(count >1){
            int start = index;
            while(count){
              chars[index++] = (count %10) + '0';
               count /=10;
            }
        reverse(chars.begin() + start, chars.begin() + index );
        }
      return index;
    }