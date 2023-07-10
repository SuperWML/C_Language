#include <stdio.h>
#define tax 12*1.875/100

int main (void)
{
	double x = 0.0;
	int i = 0;
	while(i < 5)
	{
		x = (x + 1000)/(1 + tax);
		i++;
	}
	printf ("%lf",x);
	return 0;
}
