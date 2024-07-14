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
     ListNode* getmiddle(ListNode* head){
        ListNode* slownode = head;
        ListNode* fastnode = head;
        while(fastnode->next != NULL){
            fastnode = fastnode->next;
            if(fastnode->next != NULL){
                fastnode = fastnode->next;
                slownode = slownode->next;
            }
        }
        return slownode;
     }        

    bool compareList (ListNode* head1, ListNode* head2){
        while(head1 != NULL && head2 != NULL){
            if(head1->val != head2->val){
                return false;
            } else{
                head1 = head1->next;
                head2 = head2->next;
            }
        }
        return true;
    }  
    bool isPalindrome(ListNode* head) {
        // break into two half parts

        ListNode* midnode = getmiddle(head);
        ListNode* head2 = midnode->next;
        midnode ->next  = NULL;


        // seconde list-> Reverse

        head2 = reverseList(head2);


        // compare both the linked list

        bool ans = compareList (head, head2);
        return ans;
    }