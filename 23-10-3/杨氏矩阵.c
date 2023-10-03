#include <stdio.h>
#include <stdbool.h>
#define ROW 4
#define COL 3
bool Yang(int arr[][3],int* x,int* y,int target);
int main (void)
{
	int x = ROW;
	int y = COL;
	int target = 0;
	scanf("%d",&target);
	int arr[][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	if(Yang(arr,&x,&y,target))
	{
		printf ("%d 找到了，位置是%d %d\n",target,x,y);
	}
	else
	{
		printf ("没找到\n");
	}
	return 0;
}
//函数功能：实现杨氏矩阵的功能
bool Yang(int arr[][3],int* x,int* y,int target)
{
	int x1 = 0;
	int y1 = *y-1;
	while(x1 < *x && y1 >= 0)
	{
		if(arr[x1][y1] < target)
		{
			x1++;
		}
		else if(arr[x1][y1] > target)
		{
			y1--;
		}
		else
		{
			*x = x1+1;
			*y = y1+1;
			return true;
		}
	}
	return false;
}
