ListNode* merge(ListNode* l1, ListNode* l2) {
    if(l1 == NULL){        //base case
        return l2;
    }
    if(l2 == NULL){
        return l1;
    }

    ListNode* ans = new ListNode(-1);
    ListNode* prev = ans;

    while(l1 && l2){
        if(l1->val <= l2->val){
            prev->next = l1;
            prev = l1;
            l1= l1->next;
        } else{
            prev->next = l2;
            prev= l2;
            l2 = l2->next;
        }
    }

    if(l1){
        prev->next = l1;
    }
    if(l2){
        prev->next = l2;
    }

    return ans->next;
}

int getlength(ListNode* head){
    int len = 0;
    ListNode* temp = head;
    while(temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

ListNode* sortList(ListNode* head) {
    // base case
    if(head == NULL || head->next == NULL){
        return head;
    }

    int len = getlength(head);
    int mid = len / 2;

    ListNode* left = head;
    ListNode* temp = head;

    while(mid > 1){
        temp = temp->next;
        mid--;
    }

    // now temp is at the node before mid-point
    ListNode* right = temp->next;
    temp->next = NULL;

    // sort both halves
    left = sortList(left);
    right = sortList(right);

    // merge both halves
    ListNode* mergedll = merge(left, right);
    return mergedll;
}