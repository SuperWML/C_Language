#include <stdio.h>
int main (void)
{
	int i = 1;
	float sum = 0;
	int sign = 1;
	
	for(i = 1;i <= 100; i++)
	{
		sum += (1.0/i)*sign;
		sign = -sign;
	}
	printf ("%f",sum);
	
	return 0;
}
