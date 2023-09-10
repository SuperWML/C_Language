#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main (void)
{
	char arr[10000] = {0};
	gets(arr);
	int p1 = strlen(arr);
	int p2 = strlen(arr);
	while(p1 >= 0)
	{
		while(p1 >= 0 && !isalpha(arr[p1]))
		{
			p1--;
		}
		p2 = p1;
		while(p1 >= 0 && isalpha(arr[p1]))
		{
			p1--;
		}
		for(int i = p1 + 1;i <= p2;i++)
		{
			printf ("%c",arr[i]);
		}
		printf (" ");
	}
	return 0;
}
