#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
struct Node{
	int data;
	struct Node* next;
};
//函数功能：创建链表结点
struct Node* CreatNode(int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
};
//函数功能：头插法
void InsertAtHead(struct Node** head,int data)
{
	struct Node* newNode = CreatNode(data);
	newNode->next = *head;
	*head = newNode;
}
//函数功能：尾插法
void InsertAtTail(struct Node** head,int data)
{
	struct Node* newNode = CreatNode(data);
	if(*head == NULL)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		struct Node* cur = *head;
		while(cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = newNode;
	}
}
//函数功能：删除链表中的头部元素
void DeleteAtHead(struct Node** head)
{
	if(* head == NULL)
	{
		return;
	}
	else
	{
		struct Node* tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
//函数功能：删除链表中的指定元素
void DeleteAtValue(struct Node** head,int value)
{
	if(*head == NULL)
	{
		return;
	}
	else if((*head)->data == value)
	{
		DeleteAtHead(head);
	}
	else
	{
		struct Node* cur = (*head);
		while(cur->next != NULL && cur->next->data != value)
		{
			cur = cur->next;
		}
		if(cur->next != NULL)
		{
			struct Node* tmp = cur->next;
			cur->next = tmp->next;
			free(tmp);
		}
	}
}
//函数功能：检查元素是否存在
int Search(struct Node** head,int value)
{
	struct Node* cur = *head;
	while(cur != NULL)
	{
		if(cur->data == value)
		{
			return 1;
		}
		else
		{
			cur = cur->next;
		}
	}
	return 0;
}
//函数功能：获取链表长度
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
//函数功能：遍历链表并打印元素
void PrintList(struct Node** head)
{
	struct Node* cur = *head;
	while(cur != NULL)
	{
		printf ("%d -> ",cur->data);
		cur = cur->next;
	}
	printf ("NULL\n");
}
