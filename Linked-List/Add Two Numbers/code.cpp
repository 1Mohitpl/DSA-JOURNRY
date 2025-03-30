ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* dummynode = new ListNode(-1);
    ListNode* curr = dummynode;
    ListNode* temp1 = l1;
    ListNode* temp2 = l2;
    int carry = 0;
    while (temp1 != NULL || temp2 != NULL) {
        int sum = carry;
        if (temp1) {
            sum = sum + temp1->val;
        }
        if (temp2) {
            sum = sum + temp2->val;
        }
        ListNode* newnode = new ListNode(sum % 10);
        carry = sum / 10;
        curr->next = newnode;
        curr = curr->next;

        if (temp1)
            temp1 = temp1->next;
        if (temp2)
            temp2 = temp2->next;
           
    }
    if(carry){
                ListNode* newnode = new ListNode(carry);
                curr->next = newnode;
            }
    return dummynode->next;
}