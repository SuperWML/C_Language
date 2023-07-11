#include <stdio.h>
int main (void)
{
	int rabbit,chicken;
	for(rabbit = 1;rabbit <= 98;rabbit++)
	{
		for(chicken = 1;chicken <= 98;chicken++)
		{
			if((chicken + rabbit == 98) && (4* rabbit + 2* chicken) == 386)
			{
				printf ("chicken:%d,rabbit:%d\n",chicken,rabbit);
			}
		}
	}
}
