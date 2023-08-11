#include <stdio.h>
int main (void)
{
	char ch = 0;
	scanf("%c",&ch);
	getchar();
	if(('A' <= ch && ch <= 'Z') || ('a' <= ch && ch <= 'z'))
	{
		printf ("YES\n");
	}
	else
	{
		printf ("NO\n");
	}
	return 0;
}
