#include <stdio.h>
int IsPrime(int m);
int main (void)
{
	int m;
	scanf("%d",&m);
	if(IsPrime(m))
	{
		printf ("%d is a prime number\n",m);
	}
	else
	{
		printf ("%d is not a prime number",m);
	}
	return 0;
}
int IsPrime(int m)
{
	int i = 0;
	for(i = 2;i <= m-1;i++)
	{
		if(m%i == 0)
		{
			return 0;
		}
	}
	return 1;
}
