#include <stdio.h>
int main (void)
{
	int line = 0;
	while(scanf("%d",&line) != EOF)
	{
		for(int i = 0;i < line;i++)
		{
			//打印空格
			for(int space = 0;space < line-1-i;space++)
			{
				printf (" ");
			}
			printf ("*\n");
		}
	}

	return 0;
}
