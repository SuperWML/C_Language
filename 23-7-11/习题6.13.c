#include <stdio.h>
int main (void)
{
	int num;
	int sum = 0;
	int ret = 0;
	do
	{
		ret = scanf("%d",&num);
		if(num > 0)
		{
			sum += num;
		}
	}while(1 == ret && num != 0);
	printf ("%d",sum);
	return 0;
}
