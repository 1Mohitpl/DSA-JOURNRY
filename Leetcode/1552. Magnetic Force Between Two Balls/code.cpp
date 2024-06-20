bool isanswer(vector<int>& position, int mid, int m){
              int initial = 1;
              int prev = position[0];
              for(int i = 1; i<position.size(); i++){
                if(position[i]- prev >= mid){
                    prev = position[i];
                    initial ++;
                    if(initial == m)
                    return true;
                }
              }
              if(initial<m) return false;
              return initial >= m;
}
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int start = 1; 
        int end = position.back() - position.front(); int ans =0;
        while(start<=end){
            int mid = start+ (end-start)/2;
            if(isanswer(position, mid, m)){
                ans = mid; 
                start = mid+1;
            } else{
                end  = mid-1;
            }
        }
        return ans;
    }