#include <stdio.h>
int main (void)
{
	int n = 0;
	scanf("%d",&n);
	int val[n];
	for(int i = 0;i < n;i++)
	{
		int sum_odd = 0;
		int sum_even = 0;
		scanf("%d",&val[i]);
		int tmp = val[i];
		while(tmp)
		{
			if(tmp % 2 == 1)
			{
				sum_odd++;
			}
			else
			{
				sum_even++;
			}
			tmp /= 2;
		}
		if(sum_odd % 2 == 0 && sum_even % 2 != 0)
		{
			printf ("1 ");
		}
		else if(sum_odd % 2 != 0 && sum_even % 2 == 0)
		{
			printf ("0 ");
		}
		else if(sum_even % 2 == 0 && sum_odd % 2 == 0)
		{
			printf ("10 ");
		}
		else
		{
			printf ("100 ");
		}
	}
	return 0;
}
