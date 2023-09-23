#include <stdio.h>
void MyQsortBubble(void* arr,int sz,int size,int (*cmp)(const void* e1,const void* e2));
int CmpByInt(const void* e1,const void* e2);
void swap(char* e1,char* e2,int size);
void Print(void* arr,int sz);
int main (void)
{
	int arr[] = {1,3,5,7,9,2,4,6,8,10};
	int sz = sizeof(arr)/sizeof(arr[0]);
	MyQsortBubble(arr,sz,sizeof(arr[0]),CmpByInt);
	Print(arr,sz);
	return 0;
}
//函数功能：自己手写的sqort冒泡排序函数
void MyQsortBubble(void* arr,int sz,int size,int (*cmp)(const void* e1,const void* e2))
{
	for(int i = 0;i < sz-1;i++)
	{
		for(int j = 0;j < sz-1-i;j++)
		{
			if(cmp((char*)arr + j*size,(char*)arr + (j+1)*size) > 0)
			{
				swap((char*)arr + j*size,(char*)arr + (j+1)*size,size);
			}
		}
	}
}
//函数功能：比较int元素的函数
int CmpByInt(const void* e1,const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
//函数功能：根据字节交换的函数
void swap(char* e1,char* e2,int size)
{
	for(int i = 0;i < size;i++)
	{
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}
//函数功能:打印数组的函数
void Print(void* arr,int sz)
{
	for(int i = 0;i < sz;i++)
	{
		printf ("%d ",*((int*)arr + i));
	}
}
