vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        int q = queries.size();
       unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        vector<int>result(q);
        vector<int> cumusum(n);
        int sum = 0;

        for(int i = 0; i<n; i++){
            if(vowels.count(words[i][0]) && vowels.count(words[i].back())){
                sum++;
            }
            cumusum[i]= sum;
        }
       
       for(int i = 0; i<q; i++){
            int l = queries[i][0];
            int r = queries[i][1];

            result[i] = cumusum[r] - ((l>0) ? cumusum[l-1] :0);
       }
    return result;
    }