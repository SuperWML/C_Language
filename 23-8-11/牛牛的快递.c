#include <stdio.h>
int main (void)
{
	float weight = 0.0;
	char b = 0;
	scanf("%f %c",&weight,&b);
	float over_weright = weight - 1.0;
	if(over_weright <= 0)
	{
		if(b == 'y')
		{
			printf ("25\n");
		}
		else
		{
			printf ("20\n");
		}
	}
	else if((over_weright >= 0.0) && (over_weright <= 1.0))
	{
		if(b == 'y')
		{
			printf ("26\n");
		}
		else
		{
			printf ("21\n");
		}
	}
	else
	{
		int over_price = (int)over_weright;
		if((over_weright - (int)over_weright) > 0)
		{
			if(b == 'y')
			{
				printf ("%d",20+over_price+5+1);
			}
			else
			{
				printf ("%d",20+over_price+1);
			}
		}
		else
		{
			if(b == 'y')
			{
				printf ("%d",20+over_price+5);
			}
			else
			{
				printf ("%d",20+over_price);
			}
		}
	}
	
	return 0;
}
