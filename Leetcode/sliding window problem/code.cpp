vector<int>ans;
        deque<int>dq;

        // process the first window

        for(int i = 0; i<k; i++){
            while(!dq.empty() && dq.back() < nums[i]){
                dq.pop_back();
            }

            dq.push_back(nums[i]);

        }
        // ans shoudle be in the front element 
        ans.push_back(dq.front());
        // now moving the remaining window
        for(int i =k; i<nums.size(); i++){

            if(dq.front() == nums[i-k]) dq.pop_front();
             while(!dq.empty() && dq.back() < nums[i]){
                dq.pop_back();
            }

            dq.push_back(nums[i]);
            ans.push_back(dq.front());

        }
        return ans;
    }