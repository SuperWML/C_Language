#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>
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

//函数功能：删除单链表L中的第i个结点，并用e返回其值，L的长度-1
bool ListDelete(LinkList* L,int i,int* e)
{
	int j = 0;
	LinkList p,q;
	p = *L;
	j = 1;
	//遍历寻找第i-1个结点
	while(p->next && j < i)
	{
		p = p->next;
		++j;
	}
	if(!(p->next) || j > i)
	{
		return false;
	}
	else
	{
		q = p->next;
		//将q的后继赋值给p的后继
		p->next = q->next;
		//将q结点中的数据给e
		*e = q->data;
		free(q);
		return true;
	}
}
//单链表的整表创建--头插法
void CreateListHead(LinkList* L,int n)
{
	LinkList p;
	int i;
	//初始化随机数种子
	srand(time(0));
	*L = (LinkList)malloc(sizeof(Node));
	//先建立一个带头结点的单链表
	(*L)->next = NULL;
	for(i = 0;i < n;i++)
	{
		//生成新节点
		p = (LinkList)malloc(sizeof(Node));
		//随机生成100以内的数字
		p->data = rand()%100 + 1;
		p->next = (*L)->next;
		//插入到表头
		(*L)->next = p;
	}
}
//函数功能：建立带表头结点的单链线性表L（尾插法）
void CreatListTail(LinkList* L,int n)
{
	LinkList p,r;
	int i = 0;
	//初始化随机数种子
	srand(time(0));
	*L = (LinkList)malloc(sizeof(Node));
	r = *L;
	for(i = 0;i < n;i++)
	{
		//生成新节点
		p = (LinkList)malloc(sizeof(Node));
		//随机生成1-100之间的数
		p->data = rand()%100 + 1;
		//将表尾终端结点的指针指向新节点
		r->next = p;
		//将当前的新节点定义为表尾终端结点
		r = p;
	}
	//表示当前链表结束
	r->next = NULL;
}
//单链表的整表删除,操作结果：将L置为空表
bool ClearList(LinkList* L)
{
	LinkList p,q;
	//p指向第一个结点
	p = (*L)->next;
	//没到表尾
	while(p)
	{
		q = p->next;
		free(p);
		p = q;
	}
	//头结点指针域为空
	(*L)->next = NULL;
	return true;
}

