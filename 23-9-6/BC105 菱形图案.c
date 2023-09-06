#include <stdio.h>
int main (void)
{
	int num = 0;
	while(scanf("%d",&num) != EOF)
	{
		for(int i = 0;i < num+1;i++)
		{
			//输出空格
			for(int j = 0;j < num-i;j++)
			{
				printf (" ");
			}
			//输出*
			for(int j = 0;j <= i;j++)
			{
				printf ("* ");
			}
			printf ("\n");
		}
		//输出下半部分
		for(int i = 0;i < num;i++)
		{
			//输出空格
			for(int j = 0;j <= i;j++)
			{
				printf (" ");
			}
			//输出星星
			for(int j = 0;j < num-i;j++)
			{
				printf ("* ");
			}
			printf ("\n");
		}	
	}

	return 0;
}
