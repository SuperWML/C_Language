#include <stdio.h>
int guess(int sum);
int main (void)
{
	int num = 0;
	scanf("%d",&num);
	if(num >= 555 && num <= 4995)
	{
		printf ("%d",guess(num));
	}
	return 0;
}

int guess(int sum)
{
	int i,j,k;
	for(i = 1;i <= 9;i++)
	{
		for(j = 1;j <= 9;j++)
		{
			for(k = 1;k <= 9;k++)
			{
				if(((k*100 + i*10 + j)+(j*100 + k*10 + i)+(j*100 + i*10 + k)+(i*100 + k*10 + j)+(i*100 + j*10 + k)) == sum)
				{
					return (k*100 + j*10 + i);
				}
			}
		}
	}
}
