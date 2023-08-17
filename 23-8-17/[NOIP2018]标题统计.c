#include <stdio.h>
int main (void)
{
	char arr[100] = {0};
	int count = 0;
	gets(arr);
	for(int i = 0;arr[i] != '\0';i++)
	{
		if(arr[i] == ' ' || arr[i] == '\n')
		{
			continue;
		}
		else
		{
			count++;
		}
	}
	printf ("%d",count);
	return 0;
}
