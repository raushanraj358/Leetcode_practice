class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       ListNode*Current = head;
       ListNode*prev = NULL;
       ListNode*n;
       while(Current!=NULL){
           n= Current->next;
           Current->next =prev;
           prev =Current;
           Current =n;
        }
        head = prev;
        return head;   
    }
};
