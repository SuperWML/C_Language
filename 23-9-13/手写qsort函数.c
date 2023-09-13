#include <stdio.h>
void my_bubble_qsort(void* arr,int sz,int size,int (*cmp)(const void* e1,const void* e2));
void swap(char* e1,char* e2,int size);
int cmp_int(const void* e1,const void* e2);

int main (void)
{
	int arr[10] = {1,3,5,7,9,2,4,6,8,0};
	my_bubble_qsort(arr,10,sizeof(arr[0]),cmp_int);
	for(int i = 0;i < 10;i++)
	{
		printf ("%d ",arr[i]);
	}
	return 0;
}
//函数功能：自己写的能排序任何数据类型的bubble_sort()函数
void my_bubble_qsort(void* arr,int sz,int size,int (*cmp)(const void* e1,const void* e2))
{
	for(int i = 0;i < sz-1;i++)
	{
		for(int j = 0;j < sz-1-i;j++)
		{
			if(cmp((char*)arr + j*size,(char*)arr + (j+1)*size) > 0)
			{
				swap((char*)arr + j*size,(char*)arr + (j+1) * size,size);
			}
		}
	}
}

//函数功能：根据每个字节，交换数组中的元素
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
//函数功能：比较相邻的两个元素（自己知道会操作哪两个元素）
int cmp_int(const void* e1,const void* e2)
{
	return *((int*)e1) - *((int*)e2);
}

