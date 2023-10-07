#include <stdio.h>
int main (void)
{
	int num = 0;
	scanf("%d",&num);
	int space = num*3;
	int tmp = space-1;
	for(int i = 0;i < num;i++)
	{
		for(int j = 0;j < space-1;j++)
		{
			printf (" ");
		}
		for(int j = 0;j <= i;j++)
		{
			printf ("*     ");
		}
		printf ("\n");
		for(int j = 0;j < space-2;j++)
		{
			printf (" ");
		}
		for(int j = 0;j <= i;j++)
		{
			printf ("* *   ");
		}
		printf ("\n");
		for(int j = 0;j < space-3;j++)
		{
			printf (" ");
		}
		for(int j = 0;j <= i;j++)
		{
			printf ("* * * ");
		}
		printf ("\n");
		space -= 3;
	}
	for(int i = 0;i < num;i++)
	{
		for(int j = 0;j < tmp;j++)
		{
			printf (" ");
		}
		printf ("*\n");
	}
	return 0;
}
