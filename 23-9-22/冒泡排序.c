#include <stdio.h>
void Bubble_Sort(int* arr,int sz);
int main (void)
{
	int arr[] = {0,1,3,5,7,9,2,4,6,8,10};
	int sz = sizeof(arr)/sizeof(arr[0]);
	Bubble_Sort(arr,sz);
	for(int i = 0;i < sz;i++)
	{
		printf ("%d ",arr[i]);
	}
	return 0;
}
//函数功能：手写冒泡排序
void Bubble_Sort(int* arr,int sz)
{
	for(int i = 0;i < sz-1;i++)
	{
		for(int j = 0;j < sz-1-i;j++)
		{
			if(arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}
