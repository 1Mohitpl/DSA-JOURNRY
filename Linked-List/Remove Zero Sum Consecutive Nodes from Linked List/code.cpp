 void sanitizeMap(ListNode*curr, unordered_map<int, ListNode*>&mp, int cursum){
       int temp= cursum;
       while(true){
          temp += curr->val;
          if(temp == cursum){
            break;
          } else {
            mp.erase(temp);
            curr = curr->next;
          }
       }
   }
    ListNode* removeZeroSumSublists(ListNode* head) {
        
        if(!head || head->next == NULL && head->val==0){
            return NULL;
        }

        unordered_map<int, ListNode*>mp;
        ListNode* temp = head;
        int cursum = 0;
        while(temp){
            cursum += temp->val;
            if(cursum == 0){
                head = temp->next;
                mp.clear();
            } else if(mp.find(cursum) != mp.end()){
                  sanitizeMap(mp[cursum]->next, mp, cursum);
                  mp[cursum] ->next = temp->next;
            } else {
                 mp[cursum] = temp;
            }
            temp = temp->next;
        } 
        return head;
    }