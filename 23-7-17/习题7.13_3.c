#include <stdio.h>
#include <math.h>
int IsPrime(int m);
int main (void)
{
	int i,n,sum = 0;
	scanf("%d",&n);
	for(i = 1;i <= n;i++)
	{
		if(IsPrime(i))
		{
			sum += i;
		}
	}
	printf ("%d",sum);
	
	return 0;
}
int IsPrime(int m)
{
	int i = 0;
	for(i = 2;i <= sqrt(m);i++)
	{
		if(m%i == 0)
		{
			return 0;
		}
	}
	return 1;
}
