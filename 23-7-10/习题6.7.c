#include <stdio.h>
int main (void)
{
	float x = 100;
	float y = 0;
	int year = 0;
	scanf ("%f",&y);
	while(x <= 200)
	{
		x *= (1.0+y/100);
		year++;
	}
	printf ("%d",year);
}
