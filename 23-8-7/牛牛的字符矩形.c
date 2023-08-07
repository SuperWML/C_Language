#include <stdio.h>
int main (void)
{
	char ch = 0;
	scanf("%c",&ch);
	for(int i = 0;i < 3;i++)
	{
		for(int j = 0;j < 3;j++)
		{
			printf ("%c",ch);
		}
		printf ("\n");
	}
	return 0;
}
