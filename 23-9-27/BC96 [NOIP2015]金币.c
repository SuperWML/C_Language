#include <stdio.h>
int main (void)
{
	int num = 0;
	scanf("%d",&num);
	int cur_day = 0;
	int sum = 0;
	for(int i = 1;cur_day < num;i++)
	{
		for(int j = 0;j < i;j++)
		{
			sum += i;
			cur_day++;
			if(cur_day == num)
			{
				break;
			}
		}
	}
	printf ("%d",sum);
	return 0;
}
