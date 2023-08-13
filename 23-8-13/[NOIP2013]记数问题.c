#include <stdio.h>
int main (void)
{
	int n = 0;
	int x = 0;
	int count = 0;
	scanf("%d %d",&n,&x);
	for(int i = 1;i <= n;i++)
	{
		int tmp = i;
		while(tmp)
		{
			if(tmp % 10 == x)
			{
				count++;
			}
			tmp /= 10;
		}
	}
	printf ("%d",count);
	return 0;
}
