   int i = 1; int j =0;
        while(i<nums.size()) {
          if(nums[i] == nums[j]){

             i++;                                         // using Two pointer approach here
          } else nums[++j] = nums[i++];

        }
         
         return j+1;
        
