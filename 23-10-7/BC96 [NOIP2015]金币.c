#include <stdio.h>
int main (void)
{
	int days = 0;
	int cur_days = 0;
	int sum = 0;
	scanf("%d",&days);
	for(int i = 1;cur_days < days;i++)
	{
		for(int j = 0;j < i;j++)
		{
			sum += i;
			cur_days++;
			if(cur_days == days)
			{
				break;
			}
		}
	}
	printf ("%d",sum);
	return 0;
}
