vector<ListNode*> splitListToParts(ListNode* head, int k) {
       
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        

        int eachelementofBucket = count/k;
        int remainder = count%k;
      
      // for the result
      vector<ListNode*>result (k, NULL);
      ListNode* Curr = head;
        ListNode* prev = NULL;
          for(int i = 0; i<k; i++){
             result[i] = Curr ;
            for(int j = 1; j<= eachelementofBucket + (remainder >0?1:0); j++){
                 prev = Curr ;
                Curr  = Curr ->next;
            }
            if(prev!= NULL){
             prev->next = NULL;
            }
            
            remainder--;
        }
      
      return result;
        
    }
};