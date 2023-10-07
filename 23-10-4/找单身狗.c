//用哈希表写的
#include <stdio.h>
int main (void)
{
	int arr_num = 0;
	printf ("请输入要输入的元素个数:");
	scanf("%d",&arr_num);
	int Hash[arr_num+1];
	int arr[arr_num];
	for(int i = 0;i < arr_num;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i < arr_num+1;i++)
	{
		Hash[i] = 0;
	}
	for(int i = 0;i < arr_num;i++)
	{
		Hash[arr[i]]++;
	}
	printf ("只出现一次的数字是：");
	for(int i = 0;i < arr_num;i++)
	{
		if(Hash[arr[i]] == 1)
		{
			printf ("%d ",arr[i]);
		}
	}
	printf ("\n");
	return 0;
}
