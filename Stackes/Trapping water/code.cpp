// Water trapping Problem ; Brute force apporch
int trap(vector<int>& height) { 
    int n = height.size();
    int trapwater = 0;

    for (int i = 0; i < n; i++) {
        int leftmax = 0;
        int rightmax = 0;

        for (int j = 0; j <=i; j++) {
            leftmax = max(leftmax, height[j]);
        }
        int j = i;
        while (j < n) {
            rightmax = max(rightmax, height[j]);
            j++;
        }
        trapwater += min(leftmax, rightmax) - height[i];
    }
    return trapwater;
}


// better approach which gives you tiem complexty of O(N)

int trap(vector<int>& height) {
    int n = height.size();
    vector<int>lmax(n,0);
    vector<int>rmax(n,0);
    lmax[0] = height[0];
    rmax[n-1] = height[n-1];
   

    for(int i = 1; i<n; i++){
        lmax[i] = max(lmax[i-1], height[i]);
    }

     for(int i = n-2; i>=0; i--){
         rmax[i] = max(rmax[i+1], height[i]);
     }
     int ans = 0;
    for(int i = 0; i<n; i++){
         ans += min(lmax[i], rmax[i]) - height[i];
    }
    return ans;


}

// most optimal approach using two pointrer approach
// time complexity will be O(N);
// space complexity will be O(1);

int trap(vector<int>& height) {
    int n = height.size();
    // taking two pointer
    int left = 0;
    int right = n-1;
    int  ans = 0;
    // initialize our left and right max value
    int leftmax = 0;
    int rightmax = 0;

    while(left<right){
        leftmax = max(leftmax, height[left]);
        rightmax= max(rightmax, height[right]);

        if(leftmax < rightmax){
            ans += (leftmax - height[left]);
            left++;
        } else {
           ans += (rightmax - height[right]);
             
            right--;
        }
    }
    return ans;
}