#include <stdio.h>
#include <string.h>
int main (void)
{
	char arr[30] = {0};
	int m = 0;
	int i = 0;
	int ch = 0;
	while((ch = getchar()) != '\n')
	{
		arr[i] = ch;
		i++;
	}
	scanf("%d",&m);
	printf ("%s",arr + (m-1));
	return 0;
}
