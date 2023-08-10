#include <stdio.h>
int main (void)
{
	char ch = 0;
	while(scanf("%c",&ch) != EOF)
	{
		getchar();
		if((ch == 'a' || ch == 'A') || (ch == 'E' || ch == 'e') || (ch == 'i') || (ch == 'I')
			|| (ch == 'o' || ch == 'O') || (ch == 'u' || ch == 'U'))
		{
			printf ("Vowel\n");
		}
		else
		{
			printf ("Consonant\n");
		}
	}
	return 0;
}
