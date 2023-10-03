/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


int getDecimalValue(struct ListNode* head){
	int ret = 0;
	struct ListNode* cur = head;
	while(cur != NULL)
	{
		ret = ret*2 + cur->val;
		cur = cur->next;
	}
	return ret;
}
