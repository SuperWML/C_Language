/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
	struct ListNode* tmp = (struct ListNode*)malloc(sizeof(struct ListNode));
	tmp = node->next;
	node->next = tmp->next;
	node->val = tmp->val;
	free(tmp);
}
