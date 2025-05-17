 // using two Two pointer slow and fast pointer
 
 ListNode* mergeNodes(ListNode* head) {
        if(!head) {
            return NULL;
        }
        ListNode* slow = head;
        ListNode* fast = head->next;
        ListNode* lastnode = NULL;
        int sum = 0;

        while(fast){
             if(fast->val != 0) {
                 sum += fast->val;
             } else {
                 slow ->val = sum;
                 lastnode = slow;
                 slow = slow->next;
                 sum = 0;
             }
             fast = fast->next;

            
        }

        ListNode* temp = lastnode->next;
        lastnode->next = NULL;
        while(temp){
            ListNode* nxt = temp->next;
            delete temp;
            temp = nxt;
        }
        return head;
    }