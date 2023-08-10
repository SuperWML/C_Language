#include <stdio.h>
int main (void)
{
	int k = 0;
	scanf("%d",&k);
	double sum = 0;
	int i = 0;
	for(i = 1;;i++)
	{
		sum += 1.0/i;
		if(sum > 1.0*k)
		{
			break;
		}
	}
	printf ("%d",i);
	return 0;
}
