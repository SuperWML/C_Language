#include <stdio.h>
#include <stdbool.h>
bool Yang(int (*arr)[3],int target,int*row,int*col);
int main (void)
{
	int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int row = 3;
	int col = 3;
	if(Yang(arr,7,&row,&col))
	{
		printf ("%d找到了，坐标是%d %d\n",7,row,col);
	}
	else
	{
		printf ("找不到\n");
	}
	return 0;
}
//函数功能：实现杨氏矩阵的功能
bool Yang(int (*arr)[3],int target,int*row,int*col)
{
	int x = 0;
	int y = *col - 1;
	while(x < *row && y >= 0)
	{
		if(arr[x][y] < target)
		{
			x++;
		}
		else if(arr[x][y] > target)
		{
			y--;
		}
		else
		{
			*row = x + 1;
			*col = y + 1;
			return true;
		}
	}
	return false;
}
