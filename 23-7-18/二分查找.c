#include <stdio.h>
int HalfFind(int arr[],int sz,int target);

int main (void)
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int Need = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	printf ("请输入您想要查找的数字，或者输入Ctrl+Z退出：");
	while(scanf("%d",&Need) != EOF)
	{
		if(HalfFind(arr,sz,Need) == -1)
		{
			printf ("找不到\n");
		}
		else
		{
			printf ("%d找到了！，下标是%d\n",Need,HalfFind(arr,sz,Need));
		}
		printf ("请输入您想要查找的数字，或者输入Ctrl+Z退出：");
	}

	return 0;
}
int HalfFind(int arr[],int sz,int target)
{
	int Left = 0;
	int Right = sz - 1;
	while(Left <= Right)
	{
		int mid = (Left + Right)/2;
		if(arr[mid] < target)
		{
			Left = mid + 1;
		}
		else if(arr[mid] > target)
		{
			Right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
