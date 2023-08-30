#include <stdio.h>
int main (void)
{
	long n,k = 0;
	long count = 0;
	while(scanf("%ld %ld",&n,&k) != EOF)
	{
		if(k == 0)
		{
			printf ("%ld\n",n*n);
			continue;
		}
		for(long j = k+1;j <= n;j++)
		{
			long help = n%j<k?0:(n%j) - k + 1;
			count += (j-k) * (n/j) + help;
		}
		printf ("%ld\n",count);
	}
	return 0;
}
