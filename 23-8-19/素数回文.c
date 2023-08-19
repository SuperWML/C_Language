#include <stdio.h>
#include <math.h>
long long Is_Huiwen(long long num);
int Is_Prime(long long num);
int main (void)
{
	long long n = 0;
	scanf("%lld",&n);
	if(Is_Prime(Is_Huiwen(n)))
	{
		printf ("prime\n");
	}
	else
	{
		printf ("noprime\n");
	}
	return 0;
}
//函数功能：判断是否是回文数
long long Is_Huiwen(long long num)
{
	long long num1 = num;
	num /= 10;
	while(num)
	{
		num1 = num1*10 + num%10;
		num /= 10;
	}
	return num1;
}
//函数功能：判断是否是素数
int Is_Prime(long long num)
{
	for(int i = 2;i <= sqrt(num);i++)
	{
		if(num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
