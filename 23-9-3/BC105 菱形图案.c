#include <stdio.h>
int main (void)
{
	int num = 0;
	while(scanf("%d",&num) != EOF)
	{
		for(int i = 0;i < num+1;i++)
		{
			//功能：打印空格
			for(int space = 0;space < num-i;space++)
			{
				printf (" ");
			}
			//打印星号
			for(int star = 0;star <= i;star++)
			{
				printf ("* ");
			}
			printf ("\n");
		}
		//打印下半部分
		for(int i = 0;i < num;i++)
		{
			for(int space = 0;space <= i ;space++)
			{
				printf (" ");
			}
			for(int star = 0;star < num-i;star++)
			{
				printf ("* ");
			}
			printf ("\n");
		}
	}

	return 0;
}
