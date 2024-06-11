vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
          map<int, int>mp;
          for(int &num : arr1){
            mp[num]++;
          }
          int i =0;
          for(int &num :arr2){
            while(mp[num]--> 0){
                arr1[i++] = num;
            }
          }

          for(auto &missingelement : mp){
            int frq = missingelement.second;
             while(frq>0){
                arr1[i++] = missingelement.first;
                frq --;

             }
          }

          return arr1;
    }