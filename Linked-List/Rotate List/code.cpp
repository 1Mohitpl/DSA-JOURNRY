 int getLength(ListNode* head){
         int len = 0;
         ListNode* temp = head;
         while(temp){
            temp = temp->next;
            len++;
         }
         return len;
     }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL) {
            return NULL;
        }
        int len  = getLength(head);

        int roatedTimes = (k%len);
        if(roatedTimes == 0){
            return head;
        }
        int lastnodePos = len - roatedTimes -1;
        ListNode* lasthead = head;
        while(lastnodePos != 0){
            lasthead = lasthead->next;
            lastnodePos--;
        }
        ListNode* newheadStart = lasthead->next;  // ✅ Store new head before modifying
    lasthead->next = NULL;

    ListNode* newhead = newheadStart;
    while(newhead->next != NULL){
        newhead = newhead->next;
    }
    newhead->next = head;

    return newheadStart;  // ✅ Return the correct new head
}