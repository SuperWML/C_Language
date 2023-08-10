#include <stdio.h>
int main (void)
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	if((a + b) >= 100)
	{
		c = (a+b)%100;
	}
	else
	{
		c = a+b;
	}
	if(c / 10 == 0)
	{
		printf ("%d",c%10);
	}
	else
	{
		printf ("%d",c);
	}
	return 0;
}
