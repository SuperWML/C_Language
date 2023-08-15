#include <stdio.h>
int main (void)
{
	float score[5][5] = {0};
	for(int i = 0;i < 5;i++)
	{
		for(int j = 0;j < 5;j++)
		{
			scanf("%f",&score[i][j]);
		}
	}
	for(int i = 0;i < 5;i++)
	{
		float sum = 0;
		for(int j = 0;j < 5;j++)
		{
			printf("%.1f ",score[i][j]);
			sum += score[i][j];
		}
		printf ("%.1f \n",sum);
	}
	return 0;
}
