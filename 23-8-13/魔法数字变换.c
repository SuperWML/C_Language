#include <stdio.h>
int main (void)
{
	int num = 0;
	int count = 0;
	scanf("%d",&num);
	for(;num != 1;)
	{
		if(num % 2 == 1)
		{
			num = num*3+1;
			count++;
		}
		else
		{
			num /= 2;
			count++;
		}
	}
	printf ("%d",count);
	return 0;
}
