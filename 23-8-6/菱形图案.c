#include <stdio.h>
int main (void)
{
	int number = 0;
	while(scanf("%d",&number) != EOF)
	{
		for(int line = 0;line < number;line++)
		{
			//打印空格
			for(int space = 0;space < number-line;space++)
			{
				printf (" ");
			}
			//打印正向星星图案
			for(int star = 0;star <= line;star++)
			{
				printf ("* ");
			}
			printf ("\n");
		}
		//打印倒序星星图案
		for(int line = 0;line < number+1;line++)
		{
			//打印空格
			for(int space = number;space > number-line;space--)
			{
				printf (" ");
			}
			//打印星星
			for(int star = 0;star < number+1-line;star++)
			{
				printf ("* ");
			}
			printf ("\n");
		}
	}
	return 0;
}
