#include <stdio.h>
#include <stdio.h>
#include <math.h>
int IsPrime(int m);
void PrintYinzi(int m);

int main (void)
{
	int m;
	scanf("%d",&m);
	if(IsPrime(m) == 0)
	{
		PrintYinzi(m);
	}
	else
	{
		printf ("No divisor!It is a prime number");
	}
	return 0;
}
//函数功能：判断是否是素数
int IsPrime(int m)
{
	int i = 0;
	for(i = 2;i <= sqrt(m);i++)
	{
		if(m%i == 0)
		{
			return 0;
		}
	}
	return 1;
}
//函数功能：打印不是素数的数的因子
void PrintYinzi(int m)
{
	int i = 0;
	for(i = 2;i < m;i++)
	{
		if(m % i == 0)
		{
			printf ("%d ",i);
		}
	}
}
