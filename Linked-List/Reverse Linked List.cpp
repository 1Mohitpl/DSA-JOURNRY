ListNode* reverseList(ListNode* head) {
        ListNode* prevnode = NULL;
        ListNode* currnode = head;

        while(currnode != NULL){

            ListNode* nextnode = currnode->next;
            currnode->next = prevnode;
            prevnode = currnode;
            currnode = nextnode;
            head = prevnode;
        }
        return prevnode;
    }