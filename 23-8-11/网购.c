#include<stdio.h>

int main()
{
	double price = 0.0;
	int month = 0;
	int day = 0;
	int ticket = 0;
	
	scanf("%lf %d %d %d", &price, &month, &day, &ticket);
	if (month == 11 && day == 11)
	{
		price = price * 0.7 - 50.0*ticket;
	}
	else if (month == 12 && day == 12)
	{
		price = price * 0.8 - 50*ticket;
	}
	if (price < 0)
	{
		printf("0.00\n");
	}
	else
	{
		printf("%.2lf\n", price);
	}
	
	return 0;
}
