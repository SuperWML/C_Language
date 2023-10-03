#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX_SIZE 100
struct SeqList{
	int data[MAX_SIZE];
	int length;
};
//函数功能：初始化顺序表
void InitList(struct SeqList* list)
{
	list->length = 0;
}
//函数功能：添加元素
void add(struct SeqList* list,int position,int data)
{
	int cur = position-1;
	if(list->length >= MAX_SIZE || cur < 0 || cur > list->length)
	{
		return;
	}
	else
	{
		for(int i = list->length;i > cur;i--)
		{
			list->data[i] = list->data[i-1];
		}
		list->data[cur] = data;	
		list->length++;
	}
}
//函数功能：修改元素
void Modify(struct SeqList* list,int positon,int data)
{
	int cur = positon-1;
	if(cur >= list->length || cur < 0)
	{
		return;
	}
	else
	{
		list->data[cur] = data;
	}
}
//函数功能：删除元素
void Delete(struct SeqList*list,int positon)
{
	int cur = positon-1;
	if(cur < 0 || cur >= list->length)
	{
		return;
	}
	else
	{
		for(int i = cur;i < list->length-1;i++)
		{
			list->data[i] = list->data[i+1];
		}
		list->length--;
	}
}
//函数功能：遍历数组
void Print(struct SeqList* list)
{
	for(int i = 0;i < list->length;i++)
	{
		printf ("%d ",list->data[i]);
	}
	printf ("\n");
}
//函数功能：查找原不俗
int Search(struct SeqList*list,int data)
{
	for(int i = 0;i < list->length;i++)
	{
		if(list->data[i] == data)
		{
			return i + 1;
		}
	}
}
//函数功能：返回数组的长度
int Size(struct SeqList*list)
{
	return list->length;
}
