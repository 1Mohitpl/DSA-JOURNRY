 int minElement(vector<int>& nums) {
        int minvalue = INT_MAX;
       
        for(int value : nums){
             int sum  = 0;
            int number = value;
            while(number >0){
                sum += number % 10; // extratc the last digit
                
                number /= 10;   // remove the last digit
            }


            minvalue = std::min(minvalue, sum);
        }
   return minvalue;
        
    }