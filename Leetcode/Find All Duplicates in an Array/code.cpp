// brute force techniqe
/* first store all the elements into the unordered map*/
/*then count the frequcncy of each element 
after that store the elements with frequency more then 1

time complexity will be O(NlogN) and space complexity O(N)*/
 vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int>mp;
        vector<int>result;
        for(int num : nums){
            mp[num]++;
        }

        for(auto pair : mp){
            if(pair.second >1){
                // store the duplicate elements
                result.push_back(pair.first);
            }
        }

         if (result.empty()) {
        return {};
    }
    
    // Sort the result in ascending order
    sort(result.begin(), result.end());
    
    return result;

    }
