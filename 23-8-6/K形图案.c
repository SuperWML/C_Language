#include <stdio.h>
int main (void)
{
	int number = 0;
	while(scanf("%d",&number) != EOF)
	{
		for(int line = 0;line < number+1;line++)
		{
			for(int star = number+1;star > line;star--)
			{
				printf ("* ");
			}
			printf ("\n");
		}
		for(int line = 0;line < number;line++)
		{
			for(int star = 2+line;star > 0;star--)
			{
				printf ("* ");
			}
			printf ("\n");
		}
	}
	return 0;
}
