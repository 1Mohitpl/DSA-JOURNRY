vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int>unmap;
        for(auto x:nums){             // here count the frequency of nums each element
            unmap[x]++;
        }
        sort(nums.begin(), nums.end(), [&](int a, int b) 
        {return unmap[a] != unmap[b] ? unmap[a] < unmap[b] : a>b; } );
        return nums;


    }