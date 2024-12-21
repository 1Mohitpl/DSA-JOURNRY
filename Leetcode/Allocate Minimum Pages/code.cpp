bool isvalid(vector<int>&arr, int n , int k, int allocate){
       int stu = 1;
       int pages =0;
       for(int i = 0; i<n; i++){
           if(arr[i] > allocate){
               return false;
           }
           if(pages + arr[i] <= allocate){
               pages += arr[i];
           } else {
               stu++;
               pages = arr[i];
           }
       }
       
       return stu > k ? false : true;
  }
  
  
    int findPages(vector<int> &arr, int k) {
        // code here
        
        int n = arr.size();
        if(k>n){
            return -1;
        }
        
        int start = 0;
         int end = accumulate(arr.begin(), arr.end(), 0);
        int ans = -1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(isvalid(arr, n, k, mid)){
                ans = mid;
                end = mid-1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }