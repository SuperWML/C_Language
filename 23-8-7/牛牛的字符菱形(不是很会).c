#include <stdio.h>
int main (void)
{
	char ch = 0;
	scanf("%c",&ch);
	for(int line = 0;line < 3;line++)
	{
		//先打印空格
		for(int space = 0;space < 2-line;space++)
		{
			printf (" ");
		}
		//打印符号
		for(int number = 0;number < 2*line+1;number++)
		{
			printf ("%c",ch);
		}
		printf ("\n");
	}
	for(int line = 1;line <= 2;line++)
	{
		//打印空格
		for(int space = 1;space <= line;space++)
		{
			printf (" ");
		}
		//打印符号
		for(int number = 0;number < 2*(3-line) -1;number++)
		{
			printf ("%c",ch);
		}
		printf ("\n");
	}
	return 0;
}
