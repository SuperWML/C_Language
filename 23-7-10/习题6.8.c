#include <stdio.h>
#include <math.h>
int main (void)
{
	float i = 1;
	float flag = 1;
	float sum = 0;
	float b = 1;
	while(fabs(b) > 1e-5)
	{
		b = flag/i;
		sum += b;
		i += 2;
		flag = -flag;
	}
	printf ("pi/4 = %f",sum);
	return 0;
}
