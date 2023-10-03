#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
struct List {
	int data;
	struct List* next;
};
//函数功能：创建链表结点
struct List* CreatNode(int data) {
	struct List* newNode = (struct List*)malloc(sizeof(struct List));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
};
//函数功能：头插法
void InsertAtHead(struct List** head, int data) {
	struct List* newNode = CreatNode(data);
	newNode->next = *head;
	*head = newNode;

}
//函数功能：尾插法
void InsertAtTail(struct List** head,int data)
{
	struct List* newNode = CreatNode(data);
	if(*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		struct List* cur = *head;
		while(cur -> next != NULL)
		{
			cur = cur->next;
		}
		cur->next = newNode;
	}
}
//函数功能：删除链表的头部元素
void DeleteAtHead(struct List** head)
{
	if(*head == NULL)
	{
		return;
	}
	else
	{
		struct List* tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
//函数功能：删除链表中的指定元素
void DeleteWithValue(struct List** head,int data)
{
	if(*head == NULL)
	{
		return;
	}
	else if((*head)->data == data)
	{
		DeleteAtHead(head);
	}
	else
	{
		struct List* cur = *head;
		while(cur->next != NULL && cur->next->data != data)
		{
			cur = cur->next;
		}
		if(cur->next != NULL)
		{
			struct List* tmp = cur->next;
			cur->next = tmp->next;
			free(tmp);
		}
	}
}
//函数功能：检查元素是否存在
bool Search(struct List** head,int data)
{
	struct List* cur = *head;
	while(cur != NULL)
	{
		if(cur->data == data)
		{
			return true;
		}
		cur = cur->next;
	}
	return false;
}
//函数功能：获取链表长度
int Size(struct List**head)
{
	struct List* cur = *head;
	int count = 0;
	while(cur != NULL)
	{
		count++;
		cur = cur->next;
	}
	return count;
}
//函数功能：遍历链表并打印元素
void Print(struct List**head)
{
	struct List* cur = *head;
	while(cur != NULL)
	{
		printf ("%d -> ",cur->data);
		cur = cur->next;
	}
	printf ("NULL\n");
}
