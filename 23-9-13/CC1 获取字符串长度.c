#include <stdio.h>
int main (void)
{
	int count = 0;
	char ch = 0;
	while((ch = getchar()) != '\n')
	{
		count++;
	}
	printf ("%d",count);
	return count;
}
