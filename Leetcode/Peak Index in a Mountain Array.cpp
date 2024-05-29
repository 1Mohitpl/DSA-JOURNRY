int n = arr.size();
        int start = 0;
        int end = n-1;
        int mid = start + (end-start)/2;

        while(start<end){
            int mid = start + (end-start)/2;      // logic
            if(arr[mid]<arr[mid+1]){
                start= mid +1;
            } else {
                end  = mid;
            }
        }

        return start;