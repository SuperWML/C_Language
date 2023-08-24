#include <stdio.h>
#include <string.h>
int main (void)
{
	char arr[100000] = {0};
	gets(arr);
	for(int i = strlen(arr)-1;i >= 0;i--)
	{
		printf ("%c",arr[i]);
	}
	return 0;
}
