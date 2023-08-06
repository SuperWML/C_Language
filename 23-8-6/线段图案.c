#include <stdio.h>
int main (void)
{
	int number = 0;
	while(scanf("%d",&number) != EOF)
	{
		for(int i = 0;i <number;i++)
		{
			printf ("*");
		}
		printf ("\n");
	}
	return 0;
}
