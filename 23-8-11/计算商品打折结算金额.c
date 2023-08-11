#include <stdio.h>
int main (void)
{
	float price = 0;
	scanf("%f",&price);
	if(price >= 100 && price < 500)
	{
		printf ("%.1f",price*0.9);
	}
	else if(price >= 500 && price < 2000)
	{
		printf ("%.1f",price * 0.8);
	}
	else if(price >= 2000 && price < 5000)
	{
		printf ("%.1f",price * 0.7);
	}
	else if(price >= 5000)
	printf ("%.1f",price * 0.6);
	else
	{
		printf ("%.1f",price);
	}
	return 0;
}
