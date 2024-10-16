int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int pickM = 0;
        int pickP = 0;
        int pickG = 0;

        int lastM = 0;
        int lastG = 0;
        int lastP = 0;

        int travelP = 0;
        int travelG = 0;
        int travelM = 0;
        //calculate the pick and travel time
        for(int i = 0; i<garbage.size(); i++){
            string curr = garbage[i];

            for(auto ch : curr){
                if(ch == 'P'){
                  pickP ++;
                  lastP = i;
                } else if(ch == 'G'){
                    pickG++;
                    lastG = i;

                } else if (ch == 'M'){
                    pickM++;
                    lastM = i;
                }
            }
        }
         // calculate travel time
         for(int i = 0; i<lastP; i++){
              travelP += travel[i];
         }
          for(int i = 0; i<lastG; i++){
              travelG += travel[i];
         }
          for(int i = 0; i<lastM; i++){
              travelM += travel[i];
         }
         int ans  = (pickP + travelP) + (pickG + travelG) + (pickM + travelM);
         return ans;
    }