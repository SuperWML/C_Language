#include <stdio.h>
int main (void)
{
	int num = 0;
	scanf("%d",&num);
	int space = 3*num;
	int root_space_count = space-1;
	for(int i = 0;i < num;i++)
	{
		//打印空格
		for(int j = 0;j < space-1;j++)
		{
			printf (" ");
		}
		//打印每行的星星*
		for(int j = 0;j <= i;j++)
		{
			printf ("*     ");
		}
		printf ("\n");
		//打印第二行的空格
		for(int j = 0;j < space-2;j++)
		{
			printf (" ");
		}
		//根据数量，打印每行的* *
		for(int j = 0;j <= i;j++)
		{
			printf ("* *   ");
		}
		printf ("\n");
		//打印空格
		for(int j = 0;j < space-3;j++)
		{
			printf (" ");
		}
		//根据输入的圣诞树个数，打印第三个星星
		for(int j = 0;j <= i;j++)
		{
			printf ("* * * ");
		}
		printf ("\n");
		space -= 3;
	}
	for(int i = 0;i < num;i++)
	{
		for(int j = 0;j < root_space_count;j++)
		{
			printf (" ");
		}
		printf ("*\n");
	}
	return 0;
}
