#define MAX_SIZE 100
struct SqeList{
	int base[MAX_SIZE];
	int SeqList_length;
};
//函数功能：初始化顺序表
void InitSeqlist(struct SqeList* list)
{
	list->SeqList_length = 0;
}
//函数功能：添加元素
void Add(struct SqeList* list,int data,int position)
{
	if(list->SeqList_length >= MAX_SIZE || position < 0 || position > list->SeqList_length)
	{
		return;
	}
	else
	{
		int i = 0;
		for(i = list->SeqList_length;i > position;i--)
		{
			list->base[i] = list->base[i-1];
		}
		list->base[position] = data;
		list->SeqList_length++;
	}
}
//函数功能：访问元素
void Visit(struct SqeList* list,int position)
{
	if(position < 0 || position >= list->SeqList_length)
	{
		return;
	}
	else
	{
		printf ("%d ",list->base[position]);
	}
}
//函数功能：修改元素
void Modify(struct SqeList* list,int newData,int position)
{
	if(position < 0 || position >= list->SeqList_length)
	{
		return;
	}
	else
	{
		list->base[position]=newData;
	}
}
//函数功能：删除元素
void DeleteElement(struct SqeList* list,int position)
{
	if(position < 0 || position >= list->SeqList_length)
	{
		return;
	}
	else
	{
		for(int i = position;i < list->SeqList_length-1;i++)
		{
			list->base[i] = list->base[i+1];
		}
		list->SeqList_length--;
	}
}
//函数功能：遍历数组
void PrintList(struct SqeList* list)
{
	for(int i = 0;i < list->SeqList_length;i++)
	{
		printf ("%d ",list->base[i]);
	}
}
//函数功能：查找元素
int Search(struct SqeList* list,int data)
{
	if(list->SeqList_length == 0)
	{
		return 0;
	}
	else
	{
		for(int i = 0;i < list->SeqList_length;i++)
		{
			if(list->base[i] == data)
			{
				return i;
			}
		}
	}
}
//数组的长度
int Size(struct SqeList* list)
{
	return list->SeqList_length;
}
#include <stdio.h>
int main (void)
{
	return 0;
}
