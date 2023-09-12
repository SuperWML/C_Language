#include <stdio.h>
/*void qsort (void* base, size_t num, size_t size,
  int (*compar)(const void*,const void*));*/

void my_bubble_qsort(void* base,int sz,int width,int(*cmp)(const void* e1,void* e2));
//base指针表示需要排序的数组，并且void*类型能够接受任意类型的指针
//sz参数表示数组中元素的个数
//width表示每个元素相邻的距离，也就是数组中每个元素所占的字节大小
//cmp参数是一个函数指针，同样也就是规定排序规则的函数
int cmp_int(const void*e1,const void* e2);
void swap(char* e1,char* e2,int width);

int main (void)
{
	int arr[] = {1,3,5,7,9,2,4,6,8,0};
	int sz = sizeof(arr)/sizeof(arr[0]);
	my_bubble_qsort(arr,sz,sizeof(arr[0]),cmp_int);
	for(int i = 0;i < sz;i++)
	{
		printf ("%d ",arr[i]);
	}
	return 0;
}

//函数功能：自己所实现的qsort函数
void my_bubble_qsort(void* base,int sz,int width,int(*cmp)(const void* e1,void* e2))
{
	for(int i = 0;i < sz - 1;i++)
	{
		for(int j = 0;j < sz-1-i;j++)
		{
			if(cmp((char*)base + j*width,(char*)base + (j+1)*width) > 0)
			{
				swap((char*)base + j*width,(char*)base + (j+1)*width,width);
			}
		}
	}
}

//函数功能：能交换任何类型的swap函数
void swap(char* e1,char* e2,int width)
{
	for(int i = 0;i < width;i++)
	{
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}
//函数功能：能实现int类型的比较的cmp函数
int cmp_int(const void*e1,const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
