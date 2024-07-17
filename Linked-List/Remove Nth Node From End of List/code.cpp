class Solution {
public:
  int getlength(ListNode* head) {
    ListNode* temp = head;
    int len = 0;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

ListNode* removeNthFromEnd(ListNode* head, int n) {
    if (head == NULL) {
        return head;
    }

    int len = getlength(head);
    int ans = len - n;

    // Special case: removing the head of the list
    if (ans == 0) {
        ListNode* toDelete = head;
        head = head->next;
        delete toDelete;
        return head;
    }

    ListNode* temp = head;
    for (int i = 1; i < ans; i++) {
        temp = temp->next;
    }

    ListNode* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
    return head;
}
};