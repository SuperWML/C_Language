#include <stdio.h>
int main (void)
{
	int number = 0;
	scanf("%d",&number);
	for(int line = 0;line < number;line++)
	{
		//打印空格
		for(int space = 0;space < number-line;space++)
		{
			printf ("  ");
		}
		//打印星星
		for(int star = 0;star <= line;star++)
		{
			printf ("*");
		}
		printf ("\n");
	}
	for(int line = 0;line < number+1;line++)
	{
		//打印空格
		for(int space = number;space > number-line;space--)
		{
			printf ("  ");
		}
		//打印星星
		for(int star = number+1-line;star > 0;star--)
		{
			printf ("*");
		}
		printf ("\n");
	}
	return 0;
}
