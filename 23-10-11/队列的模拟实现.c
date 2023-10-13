#include <stdlib.h>
struct QueueNode{
	int data;
	struct QueueNode* next;
};
struct Queue{
	struct QueueNode *head,*tail;
	int sz;
};
void InsertQueue(struct Queue* que,int data)
{
	struct QueueNode* newNode = (struct QueueNode*)calloc(sizeof(struct QueueNode),1);
	newNode->next = NULL;
	newNode->data = data;
	if(que->tail != NULL)
	{
		que->tail->next = newNode;	
	}
	else
	{
		que->head = newNode;
	}
	que->tail = newNode;
	que->sz++;
}
void DeleteNode(struct Queue* que)
{
	struct QueueNode* tmp = que->head;
	que->head = tmp->next;
	free(tmp);
	--que->sz;
	if(que->sz == 0)
	{
		que->tail = NULL;
	}
}
