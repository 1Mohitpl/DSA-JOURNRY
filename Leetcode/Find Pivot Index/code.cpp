// bruteforece approach 

     int leftrightSum (vector<int>& nums){
       
          for(int i = 0; i<nums.size(); i++){
               int leftsum = 0;
                int rightsum = 0;
              for(int j = 0; j<i; j++)
                  leftsum += nums[j];

                  for(int k = i+1; k<nums.size(); k++)
                     rightsum += nums[k];
                  

               if(leftsum == rightsum)
              return i;
          }
          return -1;
     }
    int pivotIndex(vector<int>& nums) {
    
         return leftrightSum(nums);
    }





    @keyframes float {
  0%, 100% { transform: translateY(0); }
  50% { transform: translateY(-5px); }
}