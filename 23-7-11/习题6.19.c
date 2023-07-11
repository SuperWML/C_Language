#include <stdio.h>
int main (void)
{
	int stranger = 0,billionnaire = 1,i = 0;
	for(i = 0;i < 30;i++)
	{
		stranger += 10;
		billionnaire *= 2;
	}
	printf ("%d,%d",stranger,billionnaire);
	return 0;
}
