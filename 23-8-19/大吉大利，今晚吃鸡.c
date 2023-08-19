#include <stdio.h>
#include <math.h>
int main (void)
{
	int n = 0;
	while(scanf("%d",&n) != EOF)
	{
		printf ("%d\n",(int)pow(3,n) - 1);
	}
	return 0;
}
