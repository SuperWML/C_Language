#include <stdio.h>
#include <math.h>
int main (void)
{
	int m,n;
	int sum = 0;
	int flag = 0;
	while(scanf("%d %d",&m,&n) != EOF)
	{
		flag = 0;
		for(;m <= n;m++)
		{
			sum = 0;
			int tmp = m;
			while(tmp)
			{
				sum += (int)pow(tmp%10,3);
				tmp /= 10;
			}
			if(sum == m)
			{
				printf ("%d ",m);
				flag = 1;
			}
		}
		
	}
	if(flag == 0)
	{
		printf ("no\n");
	}
	return 0;
}
