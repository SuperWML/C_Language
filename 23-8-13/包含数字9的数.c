#include <stdio.h>
int main (void)
{
	int count = 0;
	for(int i = 0;i < 2020;i++)
	{
		int tmp = i;
		while(tmp)
		{
			if(tmp % 10 == 9)
			{
				count++;
				break;
			}
			tmp /= 10;
		}
	}
	printf ("%d",count);
	return 0;
}
