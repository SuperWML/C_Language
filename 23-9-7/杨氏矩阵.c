#include <stdio.h>
#include <stdbool.h>
int FindYang(int arr[][3],int* row,int* col,int num);
int main (void)
{
	int arr[3][3] = {0,1,2,3,4,5,6,7,8};
	int x = 3;
	int y = 3;
	int num = 0;
	scanf("%d",&num);
	if(FindYang(arr,&x,&y,num))
	{
		printf ("%d找到了，坐标是%d,%d",num,x,y);
	}
	else
	{
		printf ("未找到");
	}
	return 0;
}
//函数功能：查找杨氏三角中的值
int FindYang(int arr[][3],int* row,int* col,int num)
{
	int x = 0;
	int y = *col - 1;
	while(x < *row && y >= 0)
	{
		if(arr[x][y] < num)
		{
			x++;
		}
		else if(arr[x][y] > num)
		{
			y--;
		}
		if(arr[x][y] == num)
		{
			*row = x;
			*col = y;
			return 1;
		}
	}
	return 0;
}
