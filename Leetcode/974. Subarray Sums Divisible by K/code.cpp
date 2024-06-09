 int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> map;

        int sum = 0;
        map[0]= 1;
        int result = 0;
        for(int i= 0; i<n;i++){
            sum += nums[i];
            int rem = sum%k;
            if(rem <0){
                rem +=k;
            }

            if(map.find(rem)!=map.end()){
                result +=map[rem];

            }
            map[rem]++;
        }

        return result;
    }