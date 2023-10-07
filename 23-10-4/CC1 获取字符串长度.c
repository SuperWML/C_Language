#include <stdio.h>
int main (void)
{
	char ch = 0;
	int count = 0;
	while((ch = getchar()) != '\n')
	{
		count++;
	}
	printf ("%d",count);
	return 0;
}
