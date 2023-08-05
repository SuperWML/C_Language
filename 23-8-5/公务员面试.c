#include <stdio.h>
int main (void)
{
	int score = 0;
	int sum = 0;
	int max = 0;
	int min = 100;
	int count = 0;
	while(scanf("%d",&score) != EOF)
	{
		if(max < score)
		{
			max = score;
		}
		if(min > score)
		{
			min = score;
		}
		sum += score;
		count++;
		if(count == 7)
		{
			sum = sum-max-min;
			printf ("%.2f\n",sum/5.0);
			sum = 0;
			count = 0;
			min = 100;
			max = 0;
		}
	}
}
