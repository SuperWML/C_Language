#include<stdio.h>
int main (void)
{
	int num = 0;
	while(scanf("%d",&num) != EOF)
	{
		for(int i = 0;i < num+1;i++)
		{
			for(int j = 0;j < num-i;j++)
			{
				printf (" ");
			}
			for(int j = 0;j <= i;j++)
			{
				printf ("* ");
			}
			printf ("\n");
		}
		for(int i = 0;i < num;i++)
		{
			for(int j = 0;j <= i;j++)
			{
				printf (" ");
			}
			for(int j = 0;j < num-i;j++)
			{
				printf ("* ");
			}
			printf ("\n");
		}
	}
	return 0;
}
