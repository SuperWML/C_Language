#include <stdio.h>
int main (void)
{
	int line = 0;
	scanf("%d",&line);
	int space = 3*line;
	int root_space = space-1;
	for(int i = 0;i < line;i++)
	{
		//打印空格
		for(int i = 0;i < space-1;i++)
		{
			printf (" ");
		}
		//根据棵数打印星星
		for(int star = 0;star <= i;star++)
		{
			printf ("*     ");
		}
		printf ("\n");
		//打印空格
		for(int i = 0;i < space-2;i++)
		{
			printf (" ");
		}
		//根据棵数打印星星
		for(int star = 0;star <= i;star++)
		{
			printf ("* *   ");
		}
		printf ("\n");
		//打印空格
		for(int i = 0;i < space-3;i++)
		{
			printf (" ");
		}
		//根据行数，打印星星
		for(int star = 0;star <= i;star++)
		{
			printf ("* * * ");
		}
		printf ("\n");
		space -= 3;
	}
	for(int i = 0;i < line;i++)
	{
		for(int i = 0;i < root_space;i++)
		{
			printf (" ");
		}
		printf ("*\n");
	}
	return 0;
}
