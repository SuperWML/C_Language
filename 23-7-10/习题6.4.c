#include <stdio.h>
int main (void)
{
	int i = 1,n;
	scanf ("%d",&n);
	while(i <= n)
	{
		printf ("%d %d\n",i*i,i*i*i);
		i++;
	}
	return 0;
}
