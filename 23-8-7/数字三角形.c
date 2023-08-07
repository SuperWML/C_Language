#include <stdio.h>
int main (void)
{
	int number = 0;
	while(scanf("%d",&number) != EOF)
	{
		for(int i = 1;i <= number;i++)
		{
			for(int j = 1;j <= i;j++)
			{
				printf ("%d ",j);
			}
			printf ("\n");
		}
	}
	return 0;
}
