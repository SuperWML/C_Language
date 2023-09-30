#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
typedef struct{
	int data[MAX_SIZE];
	int length;
}SeqList;
//函数功能：创建一个空的顺序表
void creatList(SeqList*list)
{
	list->length = 0;
}
//函数功能：向顺序表中添加元素
int InsertElement(SeqList* list,int position,int element)
{
	if(list->length >= MAX_SIZE || position < 0 || position > list->length)
	{
		return 0;
	}
	for(int i = list->length;i > position;i--)
	{
		list->data[i] = list->data[i-1];
	}
	list->data[position] = element;
	list->length++;
	return 1;
}
//函数功能：修改顺序表中的元素
int modifyElement(SeqList* list,int position,int newElement)
{
	if(position < 0 || position >= list->length)
	{
		return 0;         //修改失败
	}
	list->data[position] = newElement;
	return 1;             //修改成功
}
//函数功能：删除顺序表中的元素
int deleteElement(SeqList* list,int position)
{
	if(position < 0 || position >= list->length)
	{
		return 0;     //删除失败
	}
	else
	{
		for(int i = position;i < list->length-1;i++)
		{
			list->data[i] = list->data[i+1];
		}
		list->length--;
		return 1;      //删除成功
	}
}
//函数功能：遍历顺序表
void traverseList(SeqList* list)
{
	for(int i = 0;i < list->length;i++)
	{
		printf ("%d ",list->data[i]);
	}
	printf ("\n");
}
//函数功能：查找元素在顺序表中的位置
int searchElement(SeqList* list,int element)
{
	for(int i = 0;i < list->length;i++)
	{
		if(list->data[i] == element)
		{
			return i;          //找到元素，返回位置
		}
	}
	return -1;                 //未找到元素
}
//函数功能：求顺序表的长度
int length(SeqList* list)
{
	return list->length;
}
