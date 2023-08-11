#include <stdio.h>
int main (void)
{
	double score[4] = {0};
	for(int i = 0;i < 4;i++)
	{
		scanf("%lf",&score[i]);
	}
	score[0] = score[0] * 0.2;
	score[1] = score[1] * 0.1;
	score[2] = score[2] * 0.2;
	score[3] = score[3] * 0.5;
	printf ("%.1lf",(score[1] + score[2] + score[3] + score[0]));
	
	return 0;
}
