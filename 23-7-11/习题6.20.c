#include <stdio.h>
#include <math.h>
int main (void)
{
	int i,j;
	for(i = 1000;i < 10000;i++)
	{
		int qianwei = i/1000;
		int baiwei = i/100%10;
		int shiwei = i/10%10;
		int gewei = i%10;
		for(j = 1; j < 100;j++)
		{
			if((qianwei == baiwei) && (shiwei == gewei && gewei != qianwei) && pow(j,2) == i)
			{
				printf ("%d",i);
			}
		}
	}
	return 0;
}
