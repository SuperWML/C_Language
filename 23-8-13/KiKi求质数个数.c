#include <stdio.h>
int main (void)
{
	int i = 0;
	int j = 0;
	int n = 0;
	int count = 0;
	for(i = 101;i < 1000;i += 2)
	{
		n = 1;
		for(j = 2;j < i;j++)
		{
			if(i % j == 0)
			{
				n = 0;
				break;
			}
		}
		if(n)
		{
			count++;
		}
	}
	printf ("%d",count);
	return 0;
}
