#include <stdlib.h>
#include <malloc.h>
struct Node{
	int data;
	struct Node* next;
};
//函数功能：创建结点
struct Node* CreatNode(int data)
{
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data = data;
	newnode->next = NULL; 
	return newnode;
}
//函数功能：头插法
void InsertAtHead(struct Node ** head,int data)
{
	struct Node* newnode = CreatNode(data);
	newnode->next = *head;
	*head = newnode;
}
//函数功能：尾插法
void InsertAtTail(struct Node** head,int data)
{
	struct Node* newnode = CreatNode(data);
	if((*head) == NULL)
	{
		*head = newnode;
	}
	else
	{
		struct Node* cur = *head;
		while(cur -> next != NULL)
		{
			cur = cur->next;
		}
		cur->next = newnode;
	}
}
//函数功能：删除链表头部元素
void DeleteHeadNode(struct Node** head)
{
	if((*head) == NULL)
	{
		return;
	}
	else
	{
		struct Node* tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
}
//函数功能：删除指定元素
void deleteWithValue(struct Node** head,int value)
{
	if(*head == NULL)
	{
		return;
	}
	if((*head) -> data == value)
	{
		DeleteHeadNode(head);
	}
	else
	{
		struct Node* cur = *head;
		while(cur->next != NULL && cur->next->data != value)
		{
			cur = cur->next;
		}
		if(cur ->next != NULL)
		{
			struct Node* tmp = cur->next;
			cur->next = tmp->next;
			free(tmp);
		}
	}
}
//函数功能：查找元素是否存在
int search(struct Node** head,int value)
{
	struct Node* cur = *head;
	while(cur != NULL)
	{
		if(cur->data == value)
		{
			return 1;
		}
		cur = cur->next;
	}
	return 0;
}
//函数功能：获取链表的长度
int size(struct Node** head)
{
	int count = 0;
	struct Node* cur = *head;
	while(cur != NULL)
	{
		count++;
		cur = cur->next;
	}
	return count;
}
//函数功能：遍历链表
void print(struct Node** head)
{
	struct Node* cur = *head;
	while(cur != NULL)
	{
		printf ("%d -> ",cur->data);
		cur = cur->next;
	}
	printf ("NULL\n");
}
