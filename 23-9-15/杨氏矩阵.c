#include <stdio.h>
int Yang(int arr[][3],int row,int col,int* x,int* y,int target);
int main (void)
{
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int x;
	int y;
	if(Yang(arr,3,3,&x,&y,7))
	{
		printf ("%d找到了，坐标是%d %d",7,x,y);
	}
	return 0;
}
//函数功能：实现杨氏矩阵
int Yang(int arr[][3],int row,int col,int* x,int* y,int target)
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
			*x = x1+1;
			*y = y1+1;
			return 1;
		}
	}
	return 0;
}
