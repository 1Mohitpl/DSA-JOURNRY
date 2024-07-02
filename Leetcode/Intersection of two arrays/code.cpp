vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {


// sorting approah 
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
          int i = 0;
          int j = 0;
          vector<int> result;
          while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] == nums2[j]){
                result.push_back(nums1[i]);
                i++;
                j++;
            } else if (nums1[i] < nums2[j]) {
                i++;
            } else {
                j++;
            }
        }
        
        return result;


        // using map 
        unordered_map<int, int>map;    // create an map

        for(int &num: nums1){       // push nums1 element into the map 
            map[num]++;
        }

       vector<int> result;

        for(int i = 0; i<nums2.size(); i++){
            int num = nums2[i];
            if(map[num]>0){
            map[num]--;
            result.push_back(num);
        
        }
            
        }

        
        return result;
     }

};