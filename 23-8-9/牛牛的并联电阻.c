#include <stdio.h>
int main (void)
{
	int r1 = 0;
	int r2 = 0;
	scanf("%d %d",&r1,&r2);
	printf ("%.1f",1.0/(1.0/r1 + 1.0/r2));
	return 0;
}
