#include <stdio.h>
int main (void)
{
	int h = 0;
	scanf("%d",&h);
	int space = h*3;
	int tmp = space-1;
	for(int i = 0;i < h;i++)
	{
		//函数功能：打印空格
		for(int i = 0;i < space-1;i++)
		{
			printf (" ");
		}
		//函数功能：根据高度打印圣诞树的*
		for(int j = 0;j <= i;j++)
		{
			printf ("*     ");
		}
		printf ("\n");
		//函数功能：打印第二行空格
		for(int i = 0;i < space-2;i++)
		{
			printf (" ");
		}
		//函数功能：根据高度打印圣诞树的* *
		for(int j = 0;j <= i;j++)
		{
			printf ("* *   ");
		}
		printf ("\n");
		//打印空格
		for(int i = 0;i < space-3;i++)
		{
			printf (" ");
		}
		//打印* * *
		for(int j = 0;j <= i;j++)
		{
			printf ("* * * ");
		}
		printf ("\n");
		space -= 3;
	}
	for(int i = 0;i < h;i++)
	{
		for(int i = 0;i < tmp;i++)
		{
			printf (" ");
		}
		printf ("*\n");
	}
	return 0;
}
