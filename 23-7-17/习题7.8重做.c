#include <stdio.h>
int yezi(int num);
int main (void)
{
	int i = 0;
	for(i = 0;;i++)
	{
		if(yezi(i))
		{
			break;
		}
	}
	printf ("%d",i);
	return 0;
}
int yezi(int num)
{
	int i = 0;
	for(i = 0;i <= 5;i++)
	{
		if((num - 1)%5 != 0)
		{
			return 0;
		}
		num = (num - 1)/5*4;
	}
	return 1;
}
