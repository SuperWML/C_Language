#include <stdio.h>
#include <stdbool.h>
typedef struct Node{
	int data;
	struct Node* next;
}Node;

typedef struct Node* LinkList;

//在单链表中读取一个元素
bool GetElem(LinkList L,int i,int* e)
{
	int j = 1;
	LinkList p;
	p = L->next;
	while(p && j < i)
	{
		p = p->next;
		++j;
	}
	if(!p || j > i)
	{
		return false;
	}
	*e = p->data;
	return true;
}

//在第i个数据插入结点
bool ListInsert(LinkList* L,int i,int e)
{
	int j;
	LinkList p,s;
	p = *L;
	j = 1;
	while(p && j < i)
	{
		p = p->next;
		++j;
	}
	//第i个结点不存在
	if(!p || j > i)
	{
		return false;
	}
	//生成新节点
	s = (LinkList)malloc(sizeof(Node));
	s->data = e;
	s->next = p->next;
	//将S赋值给p的后继
	p->next = s;
	return true;
}
