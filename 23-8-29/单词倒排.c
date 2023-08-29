#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main (void)
{
	char arr[10000] = {0};
	gets(arr);
	int pt1 = strlen(arr),pt2 = strlen(arr);
	while(pt1 >= 0)
	{
		while(pt1 >= 0 && !isalpha(arr[pt1]))
		{
			pt1--;
		}
		pt2 = pt1;
		while(pt1 >= 0 && isalpha(arr[pt1]))
		{
			pt1--;
		}
		for(int i = pt1 + 1;i <= pt2;i++)
		{
			printf ("%c",arr[i]);
		}
		printf (" ");
	}
	return 0;
}
