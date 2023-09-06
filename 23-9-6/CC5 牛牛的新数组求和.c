#include <stdio.h>
int cal(int *array,int n);
int main (void)
{
	int n = 0;
	scanf("%d",&n);
	int arr[n];
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf ("%d",cal(arr,n));
	return 0;
}
//函数功能：计算数组和
int cal(int *array,int n)
{
	int sum = 0;
	for(int i = 0;i < n;i++)
	{
		sum += *(array + i);
	}
	return sum;
}
