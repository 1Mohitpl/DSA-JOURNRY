/* solve this question using Unordered_set
  time complexity - O(N) and space complexity O(1) */

int vowelStrings(vector<string>& words, int left, int right) {
        unordered_set<char>vowel = {'a', 'e','u', 'i','o'};
        int count = 0;

        for(int i = left; i<= right; i++){
              string word = words[i];
            if(vowel.count(word.front()) && vowel.count(word.back())){
                count++;
            }
        }
        return count;
    }