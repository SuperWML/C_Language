#include <stdio.h>
int main (void)
{
	int root = 0;             //控制把柄
	int n = 0;                //控制颗数
	scanf("%d",&n);
	int space = 3*n;          //控制空格
	int root_space = space-1;
	for(int i = 0;i < n;i++)
	{
		//打印空格
		for(int j = 0;j < space-1;j++)
		{
			printf (" ");
		}
		for(int j = 0;j <= i;j++)
		{
			printf ("*     ");
		}
		printf ("\n");
		for(int j = 0;j < space-2;j++)
		{
			printf (" ");
		}
		for(int j = 0;j <= i;j++)
		{
			printf ("* *   ");
		}
		printf ("\n");
		for(int j = 0;j < space - 3;j++)
		{
			printf (" ");
		}
		for(int j = 0;j <= i;j++)
		{
			printf ("* * * ");
		}
		printf ("\n");
		space -= 3;
	}
	for(;root < n;root++)
	{
		for(int i = 0;i < root_space;i++)
		{
			printf (" ");
		}
		printf ("*\n");
	}
	return 0;
}
