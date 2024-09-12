ListNode* reverseList(ListNode* head) {
    ListNode* prevnode = NULL;
    ListNode* currnode = head;

    while (currnode != NULL) {
        ListNode* nextnode = currnode->next;  // Store the next node
        currnode->next = prevnode;            // Reverse the link
        prevnode = currnode;                  // Move prevnode one step forward
        currnode = nextnode;                  // Move to the next node
    }
    return prevnode;  // prevnode is the new head of the reversed list
}
