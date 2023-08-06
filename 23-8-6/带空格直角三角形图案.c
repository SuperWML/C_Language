#include <stdio.h>
int main (void)
{
	int number = 0;
	while(scanf("%d",&number) != EOF)
	{
		for(int i = 0;i < number;i++)
		{
			//打印空格
			for(int space = 0;space < number-1-i;space++)
			{
				printf ("  ");
			}
			//打印星星
			for(int j = 0;j <= i;j++)
			{
				printf ("* ");
			}
			printf ("\n");
		}
	}
	return 0;
}
