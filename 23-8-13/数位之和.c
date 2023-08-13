#include <stdio.h>
int main (void)
{
	int num = 0;
	int sum = 0;
	scanf("%d",&num);
	while(num)
	{
		sum += num%10;
		num /= 10;
	}
	printf ("%d",sum);
	return 0;
}
