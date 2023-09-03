#include <stdio.h>
int main (void)
{
	long num = 0;
	scanf("%ld",&num);
	if(num != 0)
	while(num)
	{
		if(num % 10 == 0)
		{
			printf ("%c",'0');
		}
		else
		{
			printf ("%c",num % 10 + '0');
		}
		num /= 10;
	}
	else
	{
		printf ("0");
	}
	return 0;
}
