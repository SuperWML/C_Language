#include <stdio.h>
int main (void)
{
	char checksum = 0;
	char ch;
	while((ch = getchar()) != EOF && ch != '\n')
	{
		checksum += ch;
	}
	printf ("%d",checksum);
	return 0;
}
