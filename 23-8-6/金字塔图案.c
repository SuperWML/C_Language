#include <stdio.h>
int main (void)
{
	int number = 0;
	while(scanf("%d",&number) != EOF)
	{
		for(int line = 0;line < number;line++)
		{
			//打印空格
			for(int space = 0;space < number-1-line;space++)
			{
				printf (" ");
			}
			//打印星星
			for(int star = 0;star <= line;star++)
			{
				printf ("* ");
			}
			printf ("\n");
		}
	}

	return 0;
}
