#include <stdio.h>
#define NUMBER 10
void ReadNumber(int arr[]);
void FindMaxAndMin(int arr[]);
void ExchangeArr(int arr[],int max_xiabiao,int min_xiabiao);
void PrintArr(int arr[],int sz);

int main (void)
{
	int arr[NUMBER] = {0};
	
	ReadNumber(arr);
	FindMaxAndMin(arr);
	PrintArr(arr,NUMBER);
	
	return 0;
}
//函数功能：读取整数
void ReadNumber(int arr[])
{
	int i = 0;
	for(i = 0;i < NUMBER;i++)
	{
		scanf("%d",&arr[i]);
	}
}
//函数功能：找到最大数和最小数
void FindMaxAndMin(int arr[])
{
	int max = arr[0];
	int min = arr[0];
	int i = 0;
	int j = 0;
	for(i = 0;i < NUMBER;i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
		}
		else if(arr[i] < min)
		{
			min = arr[i];
		}
	}
	for(i = 0;i < NUMBER;i++)
	{
		if(max == arr[i])
		{
			break;
		}
	}
	for(j = 0;j < NUMBER;j++)
	{
		if(min == arr[j])
		{
			break;
		}
	}
	ExchangeArr(arr,i,j);
}
//函数功能：交换最大值和最小值
void ExchangeArr(int arr[],int max_xiabiao,int min_xiabiao)
{
	int tmp = arr[max_xiabiao];
	arr[max_xiabiao] = arr[min_xiabiao];
	arr[min_xiabiao] = tmp;
}
//函数功能：打印数组
void PrintArr(int arr[],int sz)
{
	int i = 0;
	for(i = 0;i < sz;i++)
	{
		printf ("%d ",arr[i]);
	}
}
