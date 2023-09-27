#include <stdio.h>
#include <stdbool.h>
#define ROW 3
#define COL 3
bool Yang(int arr[][COL],int *x,int *y,int target);
int main (void)
{
	int arr[ROW][COL] = {{1,2,3},{4,5,6},{7,8,9}};
	int x = ROW;
	int y = COL;
	if(Yang(arr,&x,&y,10))
	{
		printf ("%d找到了，位置是%d %d\n",7,x+1,y+1);
	}
	else
	{
		printf ("没找到\n");
	}
	return 0;
}
//函数功能：实现杨氏矩阵的功能
bool Yang(int arr[][COL],int *x,int *y,int target)
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
			*x = x1;
			*y = y1;
			return true;
		}
	}
	return false;
}
