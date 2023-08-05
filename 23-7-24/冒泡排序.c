#include <stdio.h>
void Bubble_Sort(int arr[],int sz);
int main (void)
{
	int arr[] = {1,2,32,5,6,33,4,7,8,1,3,10};
	int sz = sizeof(arr)/sizeof(arr[0]);
	printf ("没有排序之前的数组是：");
	for(int i = 0;i < sz;i++)
	{
		printf ("%d ",arr[i]);
	}
	printf ("\n");
	Bubble_Sort(arr,sz);
	printf ("排序之后的数组是：");
	for(int i = 0;i < sz;i++)
	{
		printf ("%d ",arr[i]);
	}
	return 0;
}
//函数功能：实现冒泡排序
void Bubble_Sort(int arr[],int sz)
{
	for(int i = 0;i < sz-1;i++)
	{
		for(int j = i+1;j < sz;j++)
		{
			if(arr[i] > arr[j])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}
