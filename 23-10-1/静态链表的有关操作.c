#define MAX_SIZE 1000
#include <stdio.h>
typedef struct SLinkedList{
	int data;
	int cur;
}SLinkedList[MAX_SIZE];

//函数功能：静态链表的初始化
void InitList(SLinkedList space)
{
	for(int i = 0;i < MAX_SIZE-1;i++)
	{
		space[i].cur = i+1;
	}
	space[MAX_SIZE-1].cur = 0;
}
//函数功能：分配结点
//若空闲链表非空，则返回分配的结点的下标，否则返回0
int AllocNode(SLinkedList space)
{
	int i = 0;
	i = space[0].cur;
	space[0].cur = space[i].cur;
	return i;
}
//将下标为i的空闲节点回收到备用链表
void FreeNode(SLinkedList space,int i)
{
	space[i].cur = space[0].cur;
	space[0].cur = i;
}
//创建一个含有N个结点的静态链表，返回表头在存储数组的位置
int CreatList(SLinkedList space,int n)
{
	int head,k,s,i;
	k = AllocNode(space);
	head = k;
	for(i = 1;i <= n;i++)
	{
		s = AllocNode(space);
		scanf("%d",&space[s].data);
		space[k].cur = s;
		k = s;
	}
	space[k].cur = 0;
	return head;
}
//静态链表插入结点
//在以head为表头的静态链表中，在第i个结点之前插入一个值为x的新节点
int Insert(SLinkedList space,int head,int i,int x)
{
	int j,k,m;
	if(i < 1)
	{
		return 0;
	}
	k = head;
	j = 0;
	while(k != 0 && j < i-1)
	{
		j++;
		k = space[k].cur;
	}
	if(k == 0)
	{
		return 0;
	}
	else
	{
		m = AllocNode(space);
		if(m != 0)
		{
			space[m].data = x;
			space[m].cur = space[k].cur;
			space[k].cur = m;
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
//函数功能：在以head为表头的静态链表中，删除第i个结点
int Delete(SLinkedList space,int head,int i,int*e)
{
	int k = head;
	int j = 0;
	if(i < 1)
	{
		return 0;
	}
	else
	{
		while(j < i-1 && space[k].cur != 0)
		{
			k = space[k].cur;
			j++;
		}
	}
	if(!space[k].cur)
	{
		return 0;
	}
	int p = space[k].cur;
	*e = space[p].data;
	space[k].cur = space[p].cur;
	FreeNode(space,p);
	return 1;
}
//函数功能：按值查找
int Locate(SLinkedList space,int head,int x)
{
	int k = space[head].cur;
	while(space[k].data != x && k)
	{
		k = space[k].cur;
	}
	if(!k)
	{
		return 0;
	}
	return k;
}
