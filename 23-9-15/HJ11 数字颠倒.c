#include <stdio.h>
int main (void)
{
	int num = 0;
	scanf("%d",&num);
	while(num)
	{
		if(num % 10 == 0)
		{
			printf ("%c",'0');
		}
		else
		{
			printf ("%d",num % 10);
		}
		num /= 10;
	}
	if(num == 0)
	{
		printf ("0");
	}
	return 0;
}
