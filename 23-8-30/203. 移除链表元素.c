struct ListNode* removeElements(struct ListNode* head, int val){
	struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
	dummy->next = head;
	struct ListNode* cur = dummy;
	while(cur->next)
	{
		if(cur->next->val == val)
		{
			cur->next = cur->next->next;
		}
		else
		{
			cur = cur->next;
		}
	}
	return dummy->next;
}
