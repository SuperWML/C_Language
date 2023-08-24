#include <stdio.h>
int main (void)
{
	int num = 0;
	scanf("%d",&num);
	if(num == 0)
	{
		printf ("%c",'0');
	}
	while(num != 0)
	{
		printf ("%c",num % 10 + '0');
		num /= 10;
	}
	printf ("\n");
	return 0;
}
