#include <stdio.h>
int main (void)
{
	int days = 0;
	int cur_day = 0;
	int sum = 0;
	scanf("%d",&days);
	for(int i = 1;cur_day < days;i++)
	{
		for(int j = 0;j < i;j++)
		{
			sum += i;
			cur_day++;
			if(cur_day == days)
			{
				break;
			}
		}
	}
	printf ("%d",sum);
	return 0;
}
