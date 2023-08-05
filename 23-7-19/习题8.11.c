#include <stdio.h>
int feibonaqishulie(int n);
int main (void)
{
	printf ("12个月一共生了%d对兔子",feibonaqishulie(12));
	return 0;
}
//函数功能：计算斐波那契数列
int feibonaqishulie(int n)
{
	if(n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return feibonaqishulie(n-1) + feibonaqishulie(n-2);
	}
}
