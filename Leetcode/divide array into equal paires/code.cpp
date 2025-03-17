bool divideArray(vector<int>& nums) {
    int n = nums.size();
    sort(begin(nums), end(nums));

    for(int i = 1; i < n; i+=2) {
        if(nums[i] != nums[i-1]) {
            return false;
        }
    }

    return true;
}