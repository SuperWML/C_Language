#include <stdio.h>
#include <stdio.h>
#include <math.h>
int IsPrime(int m);
void PrintZYS(int m);
int main (void)
{
	int m = 0;
	scanf("%d",&m);
	if(IsPrime(m) == 0)
	{
		printf ("%d=",m);
		PrintZYS(m);
	}
	else
	{
		printf ("It is a prime number");
	}
	return 0;
}
//函数功能：判断是否是素数
int IsPrime(int m) {
	int i = 0;
	for (i = 2; i <= sqrt(m); i++) {
		if (m % i == 0) {
			return 0;
		}
	}
	return 1;
}
//打印出质因数
void PrintZYS(int m)
{
	int i = 2;
	while(i <= 9)
	{
		if(m % i == 0)
		{
			printf ("%d",i);
			if(m/i != 1)
			{
				printf ("x ");
			}
			m /= i;
			
		}
		else
		{
			i++;
		}
	}
}
