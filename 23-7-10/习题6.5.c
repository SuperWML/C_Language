#include <stdio.h>
int main (void)
{
	float F = 0;
	while(F <= 300)
	{
		printf ("F° = %.0f，C° = %.2f\n",F,(5.0/9)*(F - 32));
		F += 10;
	}
	return 0;
}
