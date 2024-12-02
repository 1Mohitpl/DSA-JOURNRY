int isPrefixOfWord(string sentence, string searchWord) {
    stringstream ss(sentence);
    string word;
    int index = 1;

    while (ss >> word) {
        if (word.find(searchWord) == 0) { // Check if `searchWord` is a prefix
            return index;
        }
        index++;
    }

    return -1; // Return -1 if no word has `searchWord` as a prefix
}