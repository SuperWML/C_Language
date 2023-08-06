#include <stdio.h>
int main (void)
{
	int max_line = 0;
	while(scanf("%d",&max_line) != EOF)
	{
		for(int line = 0;line < max_line;line++)
		{
			//打印空格
			for(int space = 0;space < line;space++)
			{
				printf (" ");
			}
			//打印星星
			for(int star = 0;star < max_line - line;star++)
			{
				printf ("* ");
			}
			printf ("\n");
		}
	}
}
