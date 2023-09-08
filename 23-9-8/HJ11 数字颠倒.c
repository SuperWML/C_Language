#include <stdio.h>
#include <string.h>
int main (void)
{
	char arr[10000] = {0};
	scanf("%s",arr);
	int len = strlen(arr);
	for(int i = len - 1;i >= 0;i--)
	{
		printf ("%c",arr[i]);
	}
	return 0;
}
