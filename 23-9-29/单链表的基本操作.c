#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>
struct Node{
	int* data;
	struct Node* next;
};
//函数功能：创建链表节点
struct Node* CreatNode(int data)
{
	struct Node* newNode = (struct Node*)calloc(1,sizeof(struct Node));
	newNode->data = (int*)calloc(1,sizeof(int));
	*newNode->data = data;
	newNode->next = NULL;
	return newNode;
}
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
		struct Node* tmp = *head;
		free(tmp->data);
		tmp->data = NULL;
		*head = (*head)->next;
		free(tmp);
		tmp = NULL;
	}
}
//删除链表中的指定元素
void DeleteWithValue(struct Node** head,int data)
{
	if(*head == NULL)
	{
		return;
	}
	else if(*((*head)->data) == data)
	{
		DeleteAtHead(head);
	}
	else
	{
		struct Node* cur = *head;
		while(cur->next != NULL && *(cur->next->data) != data)
		{
			cur = cur->next;
		}
		if(cur->next != NULL)
		{
			struct Node* tmp = cur->next;
			free(tmp->data);
			tmp->data = NULL;
			cur->next = tmp->next;
			free(tmp);
			tmp = NULL;
		}
	}
}
//函数功能：检查元素是否存在
bool Search(struct Node** head,int data)
{
	struct Node* cur = *head;
	while(cur != NULL)
	{
		if(*(cur->data) == data)
		{
			return true;
		}
		else
		{
			cur = cur->next;
		}
	}
	return false;
}
//函数功能：遍历链表并打印链表元素
void Print(struct Node** head)
{
	struct Node* cur = *head;
	while(cur != NULL)
	{
		printf ("%d -> ",*cur->data);
		cur = cur->next;
	}
	printf ("NULL\n");
}
//函数功能：获取链表的长度
int Size(struct Node** head)
{
	struct Node* cur = *head;
	int count = 0;
	while(cur != NULL)
	{
		count++;
		cur = cur->next;
	}
	return count;
}
int main (void)
{
	struct Node* list = NULL;
	InsertAtHead(&list,1);
	InsertAtHead(&list,2);
	InsertAtHead(&list,3);
	InsertAtTail(&list,1);
	InsertAtTail(&list,2);
	InsertAtTail(&list,3);
	DeleteWithValue(&list,1);
	DeleteAtHead(&list);
	Print(&list);
}
