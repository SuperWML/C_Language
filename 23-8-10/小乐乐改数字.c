#include <stdio.h>
#include <math.h>
int main (void)
{
	int n = 0;
	scanf("%d",&n);
	int sum = 0;
	int i = 0;
	while(n)
	{
		int w = n%10;
		if(0 == w%2)
		{
			w = 0;
		}
		else
		{
			w = 1;
		}
		sum += w*pow(10,i++);
		n /= 10;
	}
	printf ("%d",sum);
	return 0;
}
