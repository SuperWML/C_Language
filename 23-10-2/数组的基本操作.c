#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
struct SeqList{
	int data[MAX_SIZE];
	int List_length;
};
//函数功能：初始化顺序表
void InitSeqList(struct SeqList* list)
{
	list->List_length = 0;
}
//函数功能：添加元素
int InsertElement(struct SeqList* list,int position,int data)
{
	if(list->List_length == MAX_SIZE || position < 1 || position >list->List_length)
	{
		return 0;
	}
	else
	{
		for(int i = list->List_length;i >= position;i--)
		{
			list->data[i] = list->data[i-1];
		}
		list->data[position-1] = data;
		list->List_length++;
	}
	
}
//函数功能：访问元素
int VisitElement(struct SeqList* list,int position)
{
	if(position < 1 || position > list->List_length)
	{
		return -1;
	}
	else
	{
		return list->data[position - 1];
	}
}
//函数功能：修改元素
void ModifyElement(struct SeqList* list,int position,int data)
{
	if(position < 1 || position > list->List_length-1)
	{
		return;
	}
	else
	{
		list->data[position-1] = data;
	}
}
//函数功能：删除元素
void DeleteElement(struct SeqList* list,int positon)
{
	if(positon < 1 || positon > list->List_length)
	{
		return;
	}
	else
	{
		for(int i = positon-1;i < list->List_length-1;i++)
		{
			list->data[i] = list->data[i+1];
		}
		list->List_length--;
	}
}
//函数功能：遍历数组
void Print_List(struct SeqList* list)
{
	for(int i = 0;i < list->List_length;i++)
	{
		printf ("%d ",list->data[i]);
	}
}
//函数功能：查找元素
int Search(struct SeqList* list,int data)
{
	if(list->List_length == 0)
	{
		return-1;	
	}
	else
	{
		for(int i = 0;i < list->List_length;i++)
		{
			if(list->data[i] == data)
			{
				return i;
			}
		}
	}
	return -1;
}
//函数功能：返回数组的长度
int Size(struct SeqList* list)
{
	return list->List_length;
}
