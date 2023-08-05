#include <stdio.h>
#include <math.h>
int WeiShu(int num);
int WeiShu_Add(int num);
int main (void)
{
	for(int i = 0;i <= 100000;i++)
	{
		int weishu = WeiShu(i);
		int sum = 0;
		for(int j = 1;j <= pow(10,weishu);j *= 10)
		{
			sum+=pow(WeiShu_Add(i/j),WeiShu(i));
		}
		if(sum == i)
		{
			printf ("%d ",i);
		}
	}
	return 0;
}
//函数功能：查找一个数有多少位
int WeiShu(int num)
{
	if(num < 10)
	{
		return 1;
	}
	else
	{
		return 1+WeiShu(num/10);
	}
}
//函数功能：获取一个数的个位数字
int WeiShu_Add(int num)
{
	return num%10;
}
