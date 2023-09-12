#include <stdio.h>
#include <stdbool.h>
bool Find_Yang(int arr[][3],int row,int col,int target,int* x,int* y);
int main (void)
{
	int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int target = 10;
	int x = 0;
	int y = 0;
	if(Find_Yang(arr,3,3,target,&x,&y))
	{
		printf ("%d找到了，对应的坐标是%d,%d",target,x,y);
	}
	else
	{
		printf ("%d没找到",target);
	}
	return 0;
}
//函数功能：实现杨氏矩阵的查找
bool Find_Yang(int arr[][3],int row,int col,int target,int* x,int* y)
{
	int x1 = 0;
	int y1 = col-1;
	while(x1 < row && y1 >= 0)
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
			*x = x1 + 1;
			*y = y1 + 1;
			return true;
		}
	}
	return false;
}
