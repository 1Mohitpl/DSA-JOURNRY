   int i = 1; int j =0;
        while(i<nums.size()) {
          if(nums[i] == nums[j]){

             i++;                                         // using Two pointer approach here
          } else nums[++j] = nums[i++];

        }
         
         return j+1;
        



// ++++++++++++++++++++++++++++++++ key pair +++++++++++++++++ 


bool twoSumapproach(int arr[], int n, int x){
        int l =0;
        int h= n-1;
        while(l<h){
            
           int sum = arr[l] + arr[h];
           if(sum == x) return true;
           else if(sum > x) h--;
           else l++;
        }
       return false;
    }
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    
	     sort(arr, arr+n);
	     return twoSumapproach(arr, n,x);
	}