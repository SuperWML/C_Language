#include <stdio.h>
int main (void)
{
	int i = 0;
	float sum = 0;
	int n = 0;
	scanf ("%d",&n);
	int j;
	for(i = 1;i < n;i++)
	{
		double num = 1;
		for(j = 1;j <= i;j++)
		{
			num *= j;
		}
		sum += num;
		if(sum > n)
		{
			break;
		}
	}
	printf ("m = %d",i - 1);
	return 0;
}
