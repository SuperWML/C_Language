#include <stdio.h>
#include <math.h>
int main (void)
{
	int count = 1;
	double sum = 1,term = 1;
	do
	{
		term *= count;
		sum += 1.0/term;
		count++;
	}while(fabs(1/term) >= 1e-5);
	printf ("e = %f,count = %d\n",sum,count);
	return 0;
}

