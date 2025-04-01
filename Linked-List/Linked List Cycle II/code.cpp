blic:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
                slow = slow->next;
            }

            if(fast == slow){
                 break;
            }
              
              
              if(fast == NULL){
                return NULL;
              }
        }
        slow = head;
        while(fast != slow){
              fast = fast->next;
              slow = slow->next;
        }
        return slow;
    }