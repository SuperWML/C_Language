#include<stdio.h>
int main (void)
{
	int killer;
	for(killer = 'A';killer <= 'D';killer++)
	{
		if((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
		{
			printf ("凶手是%c",killer);
		}
	}
	return 0;
}
