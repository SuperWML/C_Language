#include <stdio.h>
int yezi(int num);

int main (void)
{
	int i = 0;
	for(i = 0;;i++)
	{
		if(yezi(i) == 1)
		{
			printf ("%d",i);
			break;
		}
	}
	return 0;
}
int yezi(int num)
{
	int i;
	for(i = 1;i <= 5;i++)
	{
		if((num - 1) % 5 != 0)
		{
			return 0;
		}
		else
		{
			num = (num-1)/5*4;
		}
	}
	return 1;
}
