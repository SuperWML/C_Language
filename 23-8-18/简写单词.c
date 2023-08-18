#include <stdio.h>
#include <ctype.h>
int main (void)
{
	char word[5000] = {0};
	gets(word);
	for(int i = 0;word[i] != '\0';i++)
	{
		if(i == 0)
		{
			printf ("%c",toupper(word[0]));
		}
		if(word[i] == ' ')
		{
			printf ("%c",toupper(word[i+1]));
		}
	}
	return 0;
}
