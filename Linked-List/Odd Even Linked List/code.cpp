 ListNode* oddEvenList(ListNode* head) {
        if(!head) {
            return NULL;
        }
        ListNode* slow = head;
        ListNode* fast  = head->next;
        ListNode* evenhead = fast;

        while(fast != NULL && fast->next != NULL) {
             slow->next = fast->next;
             fast->next = fast->next->next;
             slow = slow->next;
             fast = fast->next;
        }

        slow->next = evenhead;
        return head;
    }