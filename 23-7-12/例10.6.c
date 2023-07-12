#include <stdio.h>
#define N 80
int MyStrlen(const char destStr[]);
int main (void)
{
	char a[N];
	gets(a);
	printf ("%d",MyStrlen(a));
	return 0;
}
int MyStrlen(const char destStr[])
{
	int i = 0;
	while(*destStr != '\0')
	{
		i++;
		destStr++;
	}
	return i;
}
