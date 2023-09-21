#include <stdio.h>
#include <stdlib.h>
//定义单链表结构体
struct Node{
	int data;
	struct Node* next;
};
//创建链表结点
struct Node* creatNode(int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}
//插入元素到链表头部
void insertAtHead(struct Node** head,int data)
{
	struct Node* newNode = creatNode(data);
	newNode->next = *head;
	*head = newNode;
}
//插入元素到链表尾部
void insertAtTail(struct Node** head,int data)
{
	struct Node* newNode = creatNode(data);
	if(*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		struct Node* current = *head;
		while(current->next != NULL)
		{
			current = current->next;
		}
		current->next = newNode;
	}
}
//删除链表头部元素
void deleteAtHead(struct Node** head)
{
	if(*head == NULL)
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
//删除指定值的元素
void deleteWithValue(struct Node** head,int value)
{
	if(*head == NULL)
	{
		return;
	}
	if((*head)->data == value)
	{
		deleteAtHead(head);
		return;
	}
	struct Node* current = *head;
	while(current->next != NULL && current->next->data != value)
	{
		current = current->next;
	}
	if(current->next != NULL)
	{
		struct Node* temp = current->next;
		current->next = temp->next;
		free(temp);
	}
}
//查找元素是否存在
int search(struct Node* head,int value)
{
	struct Node* current = head;
	while(current != NULL)
	{
		if(current->data == value)
		{
			return 1;
		}
		else
		{
			current = current->next;
		}
	}
	return 0;
}
//获取链表长度
int length(struct Node* head)
{
	int count = 0;
	struct Node* current = head;
	while(current != NULL)
	{
		count++;
		current = current->next;
	}
	return count;
}
//遍历链表并打印元素
void printList(struct Node* head)
{
	struct Node* current = head;
	while(current != NULL)
	{
		printf ("%d -> ",current->data);
		current = current->next;
	}
	printf ("NULL\n");
}
