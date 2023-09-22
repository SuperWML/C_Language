#include <stdio.h>
#include <stdbool.h>
bool Yang(int (*arr)[3],int* row,int* col,int target);
int main (void)
{
	int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int x = 4;
	int y = 3;
	int target = 0;
	scanf("%d",&target);
	if(Yang(arr,&x,&y,target))
	{
		printf ("%d找到了，坐标是%d %d\n",target,x,y);
	}
	else
	{
		printf ("找不到\n");
	}
	return 0;
}
//函数功能：实现杨氏矩阵的查找
bool Yang(int arr[][3],int* row,int* col,int target)
{
	int x = 0;
	int y = *col-1;
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
		else if(arr[x][y] == target)
		{
			*row = x+1;
			*col = y+1;
			return true;
		}
	}
	return false;
}
