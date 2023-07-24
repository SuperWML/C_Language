#include <stdio.h>
int digit(int n,int k);
int main (void)
{
	int i = 0;
	int k = 0;
	scanf("%d %d",&i,&k);
	printf ("%d",digit(i,k));
	return 0;
}
//函数功能：返回正整数n中的第k位数字（从右边算起）
int digit(int n,int k)
{
	if(k == 1)
	{
		return n%10;
	}
	else
	{
		return digit(n/10,k-1);
	}
}
