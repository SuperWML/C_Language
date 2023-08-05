#include <stdio.h>
int main (void)
{
	int line = 0;
	scanf("%d",&line);
	for(int i = 0;i < line;i++)
	{
		for(int space = 0;space < line-1-i;space++)
		{
			printf (" ");
		}
		for(int j = 0;j < 2*i+1;j++)
		{
			printf ("*");
		}
		printf ("\n");
	}
	for(int i = 0;i < line - 1;i++)
	{
		for(int space = 0;space <= i ;space++)
		{
			printf (" ");
		}
		for(int j = 0;j < 2*(line-1-i)-1;j++)
		{
			printf ("*");
		}
		printf ("\n");
	}
}
