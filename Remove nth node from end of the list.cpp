ListNode *p = head;
    ListNode *q = NULL;
    int cnt = 0;
	
	// counting the length of List;
    while (p) {
        cnt++;
        p = p->next;
    }
    
    cnt = cnt-n+1;             // postion of node to be deleted
	
    if (cnt == 1)              // if it is first node then 
        return head->next;
		
    p = head;
    int i = 1;
    while (i < cnt) {
        q = p;
        p = p->next;
        ++i;
    }
    q->next = p->next;
    return head;
}
