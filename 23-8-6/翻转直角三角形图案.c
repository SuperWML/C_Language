#include <stdio.h>
int main (void)
{
	int number = 0;
	while(scanf("%d",&number) != EOF)
	{
		for(int i = number;i > 0;i--)
		{
			for(int j = 0;j < i;j++)
			{
				printf ("* ");
			}
			printf ("\n");
		}
	}
	return 0;
}
