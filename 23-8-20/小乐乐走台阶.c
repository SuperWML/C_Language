#include <stdio.h>
int Fib(int num);
int main (void)
{
	int n = 0;
	scanf("%d",&n);
	printf ("%d",Fib(n));
	return 0;
}
//函数功能：实现斐波那契数列
int Fib(int num)
{
	if(num == 0 || num == 1)
	{
		return 1;
	}
	return Fib(num-1) + Fib(num - 2);
}
