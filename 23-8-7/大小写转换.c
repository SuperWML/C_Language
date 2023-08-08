#include <stdio.h>
int main (void)
{
	char ch = 0;
	while(scanf("%c",&ch) != EOF)
	{
		getchar();
		printf ("%c\n",ch+32);
	}
	
	return 0;
}
