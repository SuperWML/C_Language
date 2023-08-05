#include <stdio.h>
void show(int arr[],int sz);
void Swap(int arr1[],int arr2[],int sz);
int main (void)
{
	int arr1[5] = {1,2,3,4,5};
	int arr2[5] = {6,7,8,9,0};
	int sz = sizeof(arr1)/sizeof(arr1[0]);
	printf ("未交换前，arr1中的元素是：");
	show(arr1,sz);
	printf ("\n");
	printf ("未交换前，arr2中的元素是：");
	show(arr2,sz);
	printf ("\n");
	Swap(arr1,arr2,sz);
	printf ("交换后，arr1中的元素是：");
	show(arr1,sz);
	printf ("\n");
	printf ("交换后，arr2中的元素是：");
	show(arr2,sz);
	return 0;
}

//函数功能：实现打印数组中的元素
void show(int arr[],int sz)
{
	int i = 0;
	for(i = 0;i < sz;i++)
	{
		printf ("%d ",arr[i]);
	}
}

//函数功能：交换数组中的元素
void Swap(int arr1[],int arr2[],int sz)
{
	int tmp = 0;
	for(int i = 0;i < sz;i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}
