#include <stdio.h>
long long factorial(int n);
int main (void)
{
	int n = 0;
	scanf("%d",&n);
	printf("%lld",factorial(n));
	return 0;
}
//函数功能：实现阶乘
long long factorial(int n)
{
	if(n == 1)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}
