#include <stdio.h>
int main (void)
{
	int x,i,r;
	scanf("%d %d %d",&x,&i,&r);
	if((x >= i && x <= r))
	{
		printf ("true\n");
	}
	else
	{
		printf ("false\n");
	}
	return 0;
}
