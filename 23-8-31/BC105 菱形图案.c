#include <stdio.h>
int main (void)
{
	int n = 0;
	while(scanf("%d",&n) != EOF)
	{
		for(int line = 0;line < n+1;line++)
		{
			for(int space = 0;space < n-line;space++)
			{
				printf (" ");
			}
			for(int star = 0;star <= line;star++)
			{
				printf ("* ");
			}
			printf ("\n");
		}
		for(int line = 0;line < n;line++)
		{
			for(int space = 0;space <= line;space++)
			{
				printf (" ");
			}
			for(int star = 0;star < n-line;star++)
			{
				printf ("* ");
			}
			printf ("\n");
		}	
	}

}
