#include <stdio.h>
int main (void)
{
	int n = 0;
	scanf("%d",&n);
	int space = 3*n;
	int tmp = space-1;
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < space - 1;j++)
		{
			printf (" ");
		}
		for(int j = 0;j <= i;j++)
		{
			printf ("*     ");
		}
		printf ("\n");
		for(int j = 0;j < space - 2;j++)
		{
			printf (" ");
		}
		for(int j = 0;j <= i;j++)
		{
			printf ("* *   ");
		}
		printf ("\n");
		for(int j = 0;j < space - 3;j++)
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
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < tmp;j++)
		{
			printf (" ");
		}
		printf ("*\n");
	}
	return 0;
}
