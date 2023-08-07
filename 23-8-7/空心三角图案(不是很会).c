#include <stdio.h>
int main (void)
{
	int number = 0;
	while(scanf("%d",&number) != EOF)
	{
		for(int line = 0;line < number;line++)
		{
			for(int j = 0;j < number;j++)
			{
				if(line == number-1 || j == 0 || j == line)
				{
					printf ("* ");
				}
				else
				{
					printf ("  ");
				}
			}
			printf ("\n");
		}
	}

	return 0;
}
