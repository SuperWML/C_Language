#include <stdio.h>
int digit(long long x,int i);
int main (void)
{
	long long x;
	int i;
	scanf("%lld %d",&x,&i);
	printf ("%d",digit(x,i));
	return 0;
}
int digit(long long x,int i)
{
	if(i == 1)
	{
		return x % 10;
	}
	else
	{
		return digit(x/10,i-1)*10 + x%10;
	}
}
