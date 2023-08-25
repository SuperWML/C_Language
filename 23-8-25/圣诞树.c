#include <stdio.h>
int main (void)
{
	int c = 1;//用于控制最后的尾巴（树柄）
	int n = 0;//层数
	scanf("%d",&n);
	int d = 3*n;
	int tmp = d;
	for(int i = 1;i <= n;i++)
	{
		for(int a = d-1;a > 0;a--)
		{
			printf (" ");
		}
		for(int k = 1;k <= i;k++)           //k表示一行打印多少个“*     ”
		{
			printf ("*     ");
		}
		printf ("\n");
		for(int a = d-2;a >0;a--)
		{
			printf (" ");
		}
		for(int k = 1;k <= i;k++)
		{
			printf ("* *   ");
		}
		printf ("\n");
		for(int a = d-3;a > 0;a--)
		{
			printf (" ");
		}
		for(int k = 1;k <=i;k++)
		{
			printf ("* * * ");
		}
		printf ("\n");
		d -= 3;
	}
	while (c <= n)
	{
		for(int i = 1;i <= tmp;i++)
		{
			printf (" ");
		}
		printf ("*\n");
		c++;
	}
	return 0;
}
