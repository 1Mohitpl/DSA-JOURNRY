/* this is just brute-force approach while gives you TLE;
time complexity : O(N2);
*/

long long countBadPairs(vector<int>& nums) {
    int count = 0;

    for(int i = 0; i<nums.size(); i++){

        for(int j = i+1; j<nums.size(); j++){
            if(j-i != nums[j] - nums[i]){
                count++;
            }
        }
    
    }
    return count;
}

/* we can optimize the this apporach using map to store the frequency of indexes and good pairs, after that count the 
totalpairs and substract the good pairs from totalpairs, then we got bad-pairs
*/

long long countBadPairs(vector<int>& nums) {
        
    long long n = nums.size();
    long long goodpairs = 0;
    unordered_map<int,int>mp; // here store the indexs the and frequency

    for(int i = 0; i<n; i++){

        if(mp.find(i-nums[i]) != mp.end())
            goodpairs += mp[i-nums[i]];
        
        mp[i-nums[i]]++;
        
    }
     long  total_pairs = (long)(n*(n-1)/2);
     return total_pairs - goodpairs;  
}