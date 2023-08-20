#include <stdio.h>
long long jiecheng(int num);
int main (void)
{
	int n,m;
	scanf("%d %d",&n,&m);
	if((n - m) <= 0)
	{
		printf ("0");
	}
	else
	{
		printf ("%lld",jiecheng(n)/jiecheng(n - m));

	}
	return 0;
}
//函数功能：计算阶乘
long long jiecheng(int num)
{
	if(num <= 1)
	{
		return 1;
	}
	else
	{
		return num * jiecheng(num-1);
	}
}
