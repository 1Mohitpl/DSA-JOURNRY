

sort(nums.begin(), nums.end());    // first of all sort the array
        set<pair<int,int>>ans;     // set the set pair that allow store only distinct value
        int i=0;
        int j= 1;
        while(j<nums.size()){
            int diff = nums[j]-nums[i];
            if(diff == k) {
                ans.insert({nums[i], nums[j]});   // here insert the ans
                ++i;
                ++j;
            } else if(diff > k){
                i++;
            } else{
                j++;
            }
            if(i==j) j++;   // if diiference is equal to zero
        }
        return ans.size();
    