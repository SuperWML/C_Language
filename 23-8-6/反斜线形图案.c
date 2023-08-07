#include <stdio.h>
int main (void)
{
	int line = 0;
	while(scanf("%d",&line) != EOF)
	{
		for(int i = 0;i < line;i++)
		{
			//打印空格
			for(int space = line;space > line-i;space--)
			{
				printf (" ");
			}
			//打印星星
			printf ("*");
			printf ("\n");
		}
	}

	return 0;
}
