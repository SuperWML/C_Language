#include <stdio.h>
void My_Bubble_Qsort(void* arr,int sz,int size,int (*cmp)(const void* e1,const void* e2));
int cmp_int(const void* e1,const void* e2);
void swap(char* e1,char* e2,int size);
int main (void)
{
	int arr[] = {1,3,5,7,9,2,4,6,8,10};
	int sz = sizeof(arr)/sizeof(arr[0]);
	My_Bubble_Qsort(arr,sz,sizeof(arr[0]),cmp_int);
	for(int i = 0;i < sz;i++)
	{
		printf ("%d ",arr[i]);
	}
	return 0;
}
//函数功能：自己写的冒泡排序的qsort函数
void My_Bubble_Qsort(void* arr,int sz,int size,int (*cmp)(const void* e1,const void* e2))
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
//函数功能：int类型的比较函数
int cmp_int(const void* e1,const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
//函数功能：交换函数
void swap(char* e1,char* e2,int size)
{
	int i = 0;
	while(i < size)
	{
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
		i++;
	}
}
