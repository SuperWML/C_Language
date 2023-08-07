#include <stdio.h>
int main (void)
{
	int number = 0;
	while(scanf("%d",&number) != EOF)
	{
		for(int line = 0;line < number;line++)
		{
			if(line == 0 || line == number-1)
			{
				for(int star = 0;star < number;star++)
				{
					printf ("* ");
				}
			}
			else
			{
				for(int star = 0;star < number;star++)
				{
					if(star == 0 || star == number-1)
					{
						printf ("* ");
					}
					else
					{
						printf ("  ");
					}
				}
			}
			printf ("\n");
		}
	}
	return 0;
}
