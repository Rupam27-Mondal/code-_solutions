class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        ListNode* t = head;
        int times = right-left+1;
        int pos =1;

        ListNode* before = NULL;

        while(pos < left){
            before = t;
            t = t->next;
            pos++;
        }

        ListNode* curr = t;
        ListNode* prev = NULL;

        while(times--){
            ListNode* save = curr->next;
            curr->next = prev;
            prev = curr;
            curr = save;
        }

        t->next = curr;

        if(before)
            before->next = prev;
        else
            head = prev;

        return head;
    }
};