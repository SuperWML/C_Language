#include <stdio.h>
#include <stdbool.h>

bool Yang_juzhen(int (*arr)[3],int row,int col,int* x,int* y,int target);

int main (void)
{
	int arr[][3] = {{0,1,2},{3,4,5},{6,7,8},{9,10,11}};
	int x = 0,y = 0;
	if(Yang_juzhen(arr,3,3,&x,&y,7))
	{
		printf ("7找到了，下标是%d %d\n",x+1,y+1);
	}
	else
	{
		printf ("找不到\n");
	}
	
	return 0;
}
//函数功能：实现杨氏矩阵的查找功能
bool Yang_juzhen(int (*arr)[3],int row,int col,int* x,int* y,int target)
{
	int x1 = 0;
	int x2 = col-1;
	while(x1 < row && x2 >= 0)
	{
		if(*(arr[x1] + x2) < target)
		{
			x1++;
		}
		else if(*(arr[x1] + x2) > target)
		{
			x2--;
		}
		else
		{
			*x = x1;
			*y = x2;
			return true;
		}
	}
	return false;
}
