#include <stdio.h>
int main (void)
{
	int line = 0;
	while(scanf("%d",&line) != EOF)
	{
		for(int i = 0;i < line+1;i++)
		{
			//打印空格
			for(int j = 0;j < line-i;j++)
			{
				printf (" ");
			}
			//打印星星
			for(int star = 0;star <= i;star++)
			{
				printf ("* ");
			}
			printf ("\n");
		}
		for(int i = 0;i < line;i++)
		{
			//打印空格
			for(int space = 0;space <= i;space++)
			{
				printf (" ");
			}
			//打印星星
			for(int star = 0;star < line-i;star++)
			{
				printf ("* ");
			}
			printf ("\n");
		}	
	}

	return 0;
}
