#include <stdio.h>
int main (void)
{
	int day = 0;
	scanf("%d",&day);
	int cur_day = 0;
	int sum = 0;
	for(int i = 1;cur_day < day;i++)
	{
		for(int j = 0;j < i;j++)
		{
			sum += i;
			cur_day++;
			if(cur_day == day)
			{
				break;
			}
		}
	}
	printf ("%d",sum);
	return 0;
}
