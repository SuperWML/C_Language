#define MAX_SIZE 100
#include <stdbool.h>
struct List{
	int data[MAX_SIZE];
	int List_length;
};
//函数功能：初始化顺序表
void Init_List(struct List* list)
{
	list->List_length = 0;
}
//函数功能：添加元素
bool InsertElement(struct List* list,int position,int value)
{
	if(list->List_length == MAX_SIZE || position < 0 || position >list->List_length)
	{
		return false;
	}
	else
	{
		for(int i = list->List_length-1;i >= position;i++)
		{
			list->data[i+1] = list->data[i];
		}
	}
	list->data[position] = value;
	list->List_length++;
}
//函数功能：访问元素
int getElement(List* list,int position,int* element)
{
	if(position < 0 || position >=list->List_length)
	{
		return 0;
	}
	else
	{
		return list->data[position];
	}
}
//函数功能：修改元素
int modidyElement(List* list,int position,int newElement)
{
	if(position < 0 || position >= list->List_length)
	{
		return 0;
	}
	else
	{
		list->data[position] = newElement;
	}
}
//函数功能：删除顺序表中的元素
int deleteElement(List* list,int position)
{
	if(position < 0 || position >= list->List_length)
	{
		return 0;
	}
	else
	{
		for(int i = position;i < list->List_length-1;i++)
		{
			list->data[i] = list->data[i+1];
		}
		list->List_length--;
	}
	return 1;
}
//函数功能：遍历顺序表
void PrintSeq(List* list)
{
	for(int i = 0;i < list->List_length;i++)
	{
		printf ("%d ",list->data[i]);
	}
}
//函数功能：查找元素在顺序表中的位置
int Search(List* list,int element)
{
	for(int i = 0;i < list->List_length;i++)
	{
		if(list->data[i] == element)
		{
			return i;
		}
	}
	return -1;
}
//函数功能：求顺序表的长度
int Length(List*list)
{
	return list->List_length;
}
