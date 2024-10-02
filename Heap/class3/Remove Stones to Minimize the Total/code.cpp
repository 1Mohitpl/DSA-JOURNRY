class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>maxheap;
        for(int i = 0; i<piles.size(); i++){
            int element = piles[i];
            maxheap.push(element);
        }

        while(k--){
            int topnode = maxheap.top();
            topnode = topnode - topnode/2;
            maxheap.pop();
            maxheap.push(topnode);
        }
         int sum = 0;
        while(!maxheap.empty()){
             int element  = maxheap.top();
             sum+= element;
             maxheap.pop();
        }
        return sum;
    }
};