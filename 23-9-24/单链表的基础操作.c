#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct Node{
	int* data;
	struct 	Node* next;
}Node;
//函数功能:创建链表结点
Node* CreatNode(int data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->next = NULL;
	newNode->data = (int*)malloc(sizeof(int));
	*(newNode->data) = data;
	return newNode;
}
//函数功能：头插法
void InsertInHead(Node** head,int data)
{
	Node* newNode = CreatNode(data);
	newNode->next = *head;
	*head = newNode;
}
//函数功能：尾插法
void InsertInTail(Node** head,int data)
{
	Node* newNode = CreatNode(data);
	if(*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		Node* curNode = *head;
		while(curNode->next != NULL)
		{
			curNode = curNode->next;
		}
		curNode->next = newNode;
	}
}
//函数功能：删除链表的头部元素
void DeleteHeadNode(Node** head)
{
	if(*head == NULL)
	{
		return;
	}
	else
	{
		Node* tmp = *head;
		*head = (*head)->next;
		free(tmp);
		tmp->next = NULL;
	}
}
//函数功能：删除链表中指定元素的值
void DeleteWithValue(Node** head,int data)
{
	if(*head == NULL)
	{
		return;
	}
	else if(*(*head)->data == data)
	{
		DeleteHeadNode(head);
	}
	else
	{
		Node* cur = *head;
		while(cur->next != NULL && *(cur->next->data) != data)
		{
			cur = cur->next;
		}
		if(cur->next != NULL)
		{
			Node* tmp = cur->next;
			cur->next = tmp->next;
			free(tmp);
			tmp->next = NULL;
		}
	}
}
//函数功能：检查元素是否存在
bool Search(Node** head,int value)
{
	Node* cur = *head;
	if(cur->next == NULL)
	{
		return false;
	}
	else
	{
		while(cur != NULL)
		{
			if(*(cur->data) == value)
			{
				return true;
			}
			cur = cur->next;
		}
	}
	return false;
}
//函数功能：获取链表的长度
int Size(Node** head)
{
	int cont = 0;
	if(*head == NULL)
	{
		return 0;
	}
	else
	{
		Node* cur = *head;
		while(cur != NULL)
		{
			cont++;
			cur = cur->next;
		}
	}
	return cont;
}
//函数功能：遍历链表并打印元素
void Print(Node** head)
{
	if(*head == NULL)
	{
		return;
	}
	else
	{
		Node* cur = *head;
		while(cur != NULL)
		{
			printf ("%d ",*cur->data);
			cur = cur->next;
		}
		printf ("NULL\n");
	}
}
