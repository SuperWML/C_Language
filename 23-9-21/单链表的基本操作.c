#include <malloc.h>
#include <stdlib.h>
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
//函数功能：删除链表的头部元素
void DeleteAtHead(struct Node** head)
{
	if(*head == NULL)
	{
		return;
	}
	else
	{
		struct Node* tmp = (*head);
		*head = (*head)->next;
		free(tmp);
	}
}
//函数功能：删除链表中指定值的元素
void DeleteWithValue(struct Node** head,int value)
{
	if(*head == NULL)
	{
		return;
	}
	else if((*head)->data == value)
	{
		DeleteAtHead(head);
		return;
	}
	else
	{
		struct Node* current = *head;
		while(current->next != NULL && current->next->data != value)
		{
			current = current->next;
		}
		if(current->next != NULL)
		{
			struct Node* tmp = current->next;
			current->next = tmp->next;
			free(tmp);
		}
	}
}
//函数功能：检查元素是否存在
int Serch(struct Node** head,int value)
{
	struct Node* cur = *head;
	while(cur != NULL)
	{
		if(cur->data == value)
		{
			return 1;
		}
	}
	return 0;
}
//函数功能：获取链表长度
int Search(struct Node** head)
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
void Print_Node(struct Node** head)
{
	if(*head == NULL)
	{
		return;
	}
	else
	{
		struct Node* cur = *head;
		while(cur != NULL)
		{
			printf ("%d -> ",cur->data);
			cur = cur->next;
		}
		printf ("NULL\n");
	}
}
