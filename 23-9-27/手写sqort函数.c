#include <stdio.h>
void My_Bubble_Sqort(int arr[],int sz,int size,int (*cmp)(const void*e1,const void*e2));
int cmp_int(const void*e1,const void* e2);
void swap(char* ch1,char* ch2,int size);
int main (void)
{
	int arr[] = {1,3,5,7,9,2,4,6,8,10};
	My_Bubble_Sqort(arr,sizeof(arr)/sizeof(arr[0]),sizeof(arr[0]),cmp_int);
	
	for(int i = 0;i < (int)(sizeof(arr)/sizeof(arr[0]));i++)
	{
		printf ("%d ",arr[i]);
	}
	
	return 0;
}
//函数功能：模拟冒泡排序的sqort函数
void My_Bubble_Sqort(int arr[],int sz,int size,int (*cmp)(const void*e1,const void*e2))
{
	for(int i = 0;i < sz-1;i++)
	{
		for(int j = 0;j < sz-i;j++)
		{
			if(cmp((char*)arr + j*size,(char*)arr + (j+1)*size) > 0)
			{
				swap((char*)arr + j*size,(char*)arr + (j+1)*size,size);
			}
		}
	}
}
//函数功能：int的比较函数
int cmp_int(const void*e1,const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
//函数功能:实现每个字节的交换功能
void swap(char* ch1,char* ch2,int size)
{
	for(int i = 0;i < size;i++)
	{
		char tmp = *ch1;
		*ch1 = *ch2;
		*ch2 = tmp;
		ch1++;
		ch2++;
	}
}
