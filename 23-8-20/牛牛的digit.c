#include <stdio.h>
int digit(int x,int i);
int main (void)
{
	int x,i;
	scanf("%d %d",&x,&i);
	printf ("%d",digit(x,i));
	return 0;
}
//函数功能：取出固定的位数
int digit(int x,int i)
{
	if(i == 1)
	{
		return x % 10;
	}
	else
	{
		return digit(x/10,i-1) * 10 + x%10;
	}
}
