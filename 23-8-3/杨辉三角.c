#include <stdio.h>
void Init_YangHui_Triangle(int line,int arr[][line]);
void Print_YangHui_Triangle(int line,int arr[][line]);

int main (void)
{
	int num = 0;
	printf ("请输入您想要打印少行杨辉三角：");
	scanf("%d",&num);
	int arr[num][num];
	
	Init_YangHui_Triangle(num,arr);
	Print_YangHui_Triangle(num,arr);
	
	return 0;
}

//函数功能:初始化杨辉三角，给里面的元素赋值
void Init_YangHui_Triangle(int line,int arr[][line])
{
	for(int i = 0;i < line;i++)
	{
		arr[i][0] = 1;
	}
	for(int i = 1;i < line;i++)
	{
		for(int j = 1;j < line;j++)
		{
			arr[i][j] = 1;
		}
	}
	for(int i = 2;i < line;i++)
	{
		for(int j = 1;j < i;j++)
		{
			arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
		}
	}
}

//函数功能：打印杨辉三角
void Print_YangHui_Triangle(int line,int arr[][line])
{
	for(int i = 0;i < line;i++)
	{
		for(int j = 0;j <= i;j++)
		{
			printf ("%-d ",arr[i][j]);
		}
		printf ("\n");
	}
}
