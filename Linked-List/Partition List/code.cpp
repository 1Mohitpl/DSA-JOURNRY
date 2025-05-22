ListNode* partition(ListNode* head, int x) {
        ListNode* small = new ListNode(0);
        ListNode* large = new ListNode(0);

        ListNode* smallpt = small;
        ListNode* largept = large;
   
        while(head != NULL) {
            if(head->val < x){
                smallpt->next = head;
                smallpt = smallpt->next;
            } else{
                largept->next = head;

                largept = largept->next;
            }
            head = head->next;
        }
        smallpt->next = large->next;
        large->next = NULL;
        largept->next = NULL;
        return small->next;












    }