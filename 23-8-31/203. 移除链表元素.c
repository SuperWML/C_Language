/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
	struct ListNode* Vnode = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* cur = Vnode;
	Vnode->next = head;
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
	return Vnode->next;
}
