bool matchPattern(string &nums, string &pattern){
    for(int i = 0; i<pattern.length(); i++){
        if((pattern[i] == 'I' && nums[i] > nums[i+1]) ||
         (pattern[i] == 'D'  && nums[i] < nums[i+1])){
            return false;
         }
    }
    return true;
}
string smallestNumber(string pattern) {
    int n = pattern.length();
    string nums = "";

    for(int i = 1; i<=n+1; i++){
        nums.push_back(i + '0');
    }

    while(!matchPattern(nums,pattern)){
         next_permutation(begin(nums), end(nums));
    }
    return nums;
}