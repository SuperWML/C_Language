#include <stdio.h>
int main (void)
{
	int n = 0;
	int sum = 0;
	int count = 0;
	scanf("%d",&n);
	for(int i = 1;i <= n;i++)
	{
		sum = 0;
		for(int j = 1;j < i;j++)
		{
			if(i % j == 0)
			{
				sum += j;
			}
		}
		if(sum == i)
		{
			count++;
		}
	}
	printf ("%d",count);
	return 0;
}
