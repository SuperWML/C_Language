#include <stdio.h>
int main (void)
{
	int a = 25;
	printf ("%d的二进制中的奇数位和偶数位中的位数\n",a);
	printf ("奇数位：");
	for(int i = 0;i < 32;i++)
	{
		if(i % 2 == 1)
		{
			printf ("%d ",(a>>i)&1);
		}
	}
	printf ("\n");
	printf ("偶数位：");
	for(int i = 0;i < 32;i++)
	{
		if(i % 2 == 0)
		{
			printf ("%d ",(a>>i)&1);
		}
	}
	return 0;
}
