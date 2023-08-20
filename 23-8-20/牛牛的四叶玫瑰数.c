#include <stdio.h>
#include <math.h>
int main (void)
{
	int r,l;
	int sum = 0;
	scanf("%d %d",&l,&r);
	for(int i = l;i <= r;i++)
	{
		sum = 0;
		int tmp = i;
		while(tmp)
		{
			sum += (int)pow(tmp % 10,4);
			tmp /= 10;
		}
		if(sum == i)
		{
			printf ("%d ",i);
		}
	}
	return 0;
}
