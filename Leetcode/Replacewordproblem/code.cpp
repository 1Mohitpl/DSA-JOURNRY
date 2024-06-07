string findroot(string &word,  unordered_set<string> &st){
      for(int l = 0; l<=word.length(); l++){
        string root = word.substr(0, l);
        if(st.count(root)){
            return root;
        }
      }

      return word;
}
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string> st(begin(dictionary), end(dictionary));  // store all the woords from dictionary

        stringstream ss(sentence); // pass the sentence and get words from sentence
        string word; // store all the words

        string result;   // return result statement 
         
         while(getline(ss, word, ' ')){
            result += findroot (word, st) + " ";
         }
         result.pop_back(); // delete space form last 

         return result;



    }